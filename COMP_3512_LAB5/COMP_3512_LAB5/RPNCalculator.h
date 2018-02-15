#pragma once
#include <stack>;
#include "Operation.h"
#include "AdditionOperation.h"
#include "SubtractionOperation.h"
#include "MultiplicationOperation.h"
#include "DivisionOperation.h"

class RPNCalculator {
	private:
		int result;
		std::stack<int> stack;

		// this seems to work, but not with operation...hmm...just abtractOp?
		// we need to do this with public constants ? and with opperaion*
		AbstractOperation* operation_type(int operation) {
			AbstractOperation* temp;

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

		void perform(Operation*) {
			// pop two numbers from the stack
			// apply the op to those numbers
			// push the results back on the stack
		}

		int process_form(std::string formula) {
			//reads formula from left to right
			// push ints from formula to the stack 
			// bunch of wierd instructions i dont understand
			// yeah more wierd stuff, we are fucked
		}


};