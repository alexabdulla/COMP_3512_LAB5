#pragma once
#include "Operation.h"

/*
Class defines a DivisionOperation which extends AbstractOperation
*/
class DivisionOperation : public AbstractOperation {
public:

	/* This operation's code*/
	static const char OPERATION_CODE = '*';

	/*
	Desc: Empty Constructor
	Pre: A DivisionOperation
	Post: Puts the opCode for this operation up to the base class
	Return: Nothing
	*/
	DivisionOperation() :AbstractOperation(OPERATION_CODE) { }

	/*
	Desc: Performs the operation on two ints
	Pre: Two ints
	Post: The resulting operation is returned 
	Return: The result
	*/
	int perform(int x, int y) {
		return x / y;
	}

	/*
	Desc: Destructor
	Pre: A DivisionOperation
	Post: Destruction
	Return: Nothing
	*/
	~DivisionOperation() { }
};