#pragma once
#include <stack>;
#include "Operation.h"
#include "AdditionOperation.h"
#include "SubtractionOperation.h"
#include "MultiplicationOperation.h"
#include "DivisionOperation.h"
#include <sstream>
#include <string>

/* Defines a Reverse Polish Notation calculat */
class RPNCalculator {

private:
		/*The result of the RPN calculation */
		int result;
		/*The stack we will use for RPN*/
		std::stack<int> stack;

		/*
		Desc: Gets the type of operation we want to use
		Pre: An operation int
		Post: A new Operation object
		Return: Temp, an operation object
		*/
		Operation* operation_type(int operation) {
			Operation* temp;

			switch (operation) {
			
			default: 
				temp = new AdditionOperation();
				break;
			case '+' :
				temp = new AdditionOperation();
				break;
			case '-' :
				temp = new SubtractionOperation();
				break;
			case '/':
				temp = new DivisionOperation();
				break;
			case '*':
				temp = new MultiplicationOperation();
				break;
			}
			
			
			return temp;
		};

		/*
		Desc: Perrforms the operation for the top two on the stack
		Pre: A stack
		Post: Puts the result on top of the stack
		Return: Void
		*/
		void perform(Operation* thisOp) {
			int y = stack.top();
			stack.pop();
			
			int x = stack.top();
			stack.pop();
			
			int newResult = thisOp->perform(x, y);
			
			stack.push(newResult);
		}

public: 
		
		/*
		Desc: Processes a formula using all helper methods 
		Pre: A formula in a string
		Post: The resulting int is return, and the result is put on top of the stack
		Return: The resulting int
		*/
		int process_form(std::string formula) {
			int a;
	
			std::istringstream iss(formula);
			std::string token;
			while (iss >> token) {
				std::istringstream iss2(token); 
					//push on stack
			
				int n;;
				if(iss2 >>n) {
					stack.push(n);
				} else {
					Operation* opType = this->operation_type(n);
					this->perform(opType);
				}
			}
	
			result = stack.top();
			return result; 
		}

};