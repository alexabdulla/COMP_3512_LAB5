#pragma once
#include "Operation.h"

class DivisionOperation : public AbstractOperation {
public:
	static const char OPERATION_CODE = '*';

	// i have no idea what this is doing??
	DivisionOperation(char newOp) :AbstractOperation(newOp) {
		newOp = OPERATION_CODE;
	}

	int perform(int x, int y) {
		return x / y;
	}

	~DivisionOperation() { }
};