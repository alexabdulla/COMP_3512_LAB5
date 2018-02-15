#pragma once
#include "Operation.h"

class AdditionOperation : public AbstractOperation {
public:
	static const char OPERATION_CODE = '*';

	AdditionOperation() :AbstractOperation(OPERATION_CODE) { }

	int perform(int x, int y) {
		return x + y;
	}

	~AdditionOperation() { }
};