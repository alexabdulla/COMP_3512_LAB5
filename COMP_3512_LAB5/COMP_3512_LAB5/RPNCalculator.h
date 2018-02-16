#pragma once
#include <stack>;
#include "Operation.h"
#include "AdditionOperation.h"
#include "SubtractionOperation.h"
#include "MultiplicationOperation.h"
#include "DivisionOperation.h"
#include <sstream>
#include <string>

class RPNCalculator {
	private:
		int result;
		std::stack<int> stack;

		// we need to do this with public constants ? and with opperaion*
		Operation* operation_type(int operation) {
			Operation* temp;

			switch (operation) {
			
			default: 
				temp = new AdditionOperation();
				break;
			case '+' :
				temp = new AdditionOperation();

				std::cout << "We are doing addition";
				break;
			case '-' :
				temp = new SubtractionOperation();

				std::cout << "We are doing subtraction";
				break;
			case '/':
				temp = new DivisionOperation();

				std::cout << "We are doing divison";
				break;
			case '*':
				temp = new MultiplicationOperation();

				std::cout << "We are doing mult";
				break;
			}
			
			
			return temp;
		};

		void perform(Operation* thisOp) {
			// pop two numbers from the stack
			int y = stack.top();
			stack.pop();
			std::cout << "We are popping " << y; 
			int x = stack.top();
			stack.pop();
			std::cout << "We are popping " << x;
			// apply the op to those numbers
			std::cout << "We are performing an op on " << x << " and " << y;

			int newResult = thisOp->perform(x, y);
			// push the results back on the stack
			stack.push(newResult);
		}

public: 

		int process_form(std::string formula) {
			int a;
			
			for (int i = 0; i < formula.length(); i++) {
				char c = formula.at(i);
				if (isdigit(c)) {
					std::cout << "we have found digit ";
					a = c - '0';
					stack.push(a);
				} 

				else if ( c != ' ') {

					std::cout << "we have found an op";
					
					Operation* opType = this->operation_type(c);
					this->perform(opType);
				}
			}
			
			result = stack.top();
			return result; 
		}

};