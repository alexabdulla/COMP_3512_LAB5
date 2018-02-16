#pragma once
#include <stack>;
#include "Operation.h"
#include "AdditionOperation.h"
#include "SubtractionOperation.h"
#include "MultiplicationOperation.h"
#include "DivisionOperation.h"
#include <sstream>

class RPNCalculator {
	private:
		int result;
		std::stack<int> stack;

		// we need to do this with public constants ? and with opperaion*
		Operation* operation_type(int operation) {
			Operation* temp;

			switch (operation) {
			
			case '+' :
				temp = new AdditionOperation();
			case '-' :
				temp = new SubtractionOperation();
			case '/':
				temp = new DivisionOperation();
			case '*':
				temp = new MultiplicationOperation();
			}
			
			
			return temp;
		};

		void perform(Operation* thisOp) {
			// pop two numbers from the stack
			int y = stack.top();
			stack.pop();
			int x = stack.top();
			stack.pop();
			// apply the op to those numbers
			int newResult = thisOp->perform(x, y);
			// push the results back on the stack
			stack.push(newResult);
		}

public: 

		int process_form(std::string formula) {
			//reads formula from left to right
			int a;
			char b;
			int c;

			std::stringstream ss(formula);
			ss >> a >> b >> c;
		
			// push ints from formula to the stack 
			stack.push(c);
			stack.push(a);
			//stack.push(b);
			// bunch of wierd instructions i dont understand
			// yeah more wierd stuff, we are fucked
			Operation* opType = this->operation_type(b);
			this->perform(opType);
			this->

		}

};