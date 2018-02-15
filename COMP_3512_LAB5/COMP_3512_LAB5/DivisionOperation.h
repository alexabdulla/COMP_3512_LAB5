#pragma once
#include "Operation.h"

class DivisionOperation : public AbstractOperation {
public:
	static const char OPERATION_CODE = '*';

	DivisionOperation() :AbstractOperation(OPERATION_CODE) { }

	int perform(int x, int y) {
		return x / y;
	}

	~DivisionOperation() { }
};