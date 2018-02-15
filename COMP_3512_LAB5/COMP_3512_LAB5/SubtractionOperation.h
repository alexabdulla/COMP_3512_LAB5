#pragma once
#include "Operation.h"

class SubtractionOperation : public AbstractOperation {
public:
	static const char OPERATION_CODE = '*';

	SubtractionOperation() :AbstractOperation(OPERATION_CODE) {
		
	}

	int perform(int x, int y) {
		return x * y;
	}

	~SubtractionOperation() { }
};