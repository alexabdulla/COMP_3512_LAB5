#pragma once
#include "Operation.h"

class MultiplicationOperation : public AbstractOperation {
	public:
		static const char OPERATION_CODE = '*';

		// i have no idea what this is doing??
		MultiplicationOperation():AbstractOperation(OPERATION_CODE) {
		}

		int perform(int x, int y) {
			return x * y; 
		}

		~MultiplicationOperation() { }
};