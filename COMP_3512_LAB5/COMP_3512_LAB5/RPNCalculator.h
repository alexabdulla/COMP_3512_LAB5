#pragma once
#include <stack>;
#include "Operation.h"
#include "AdditionOperation.h"

class RPNCalculator {
	private:
		int result;
		std::stack<int> stack;

		// this seems to work, but not with operation...hmm...
		Operation* operation_type(int operation) {
			Operation* temp;
			AdditionOperation* additionOp = new AdditionOperation(operation);
			//temp = additionOp;
			return temp;
		};


};