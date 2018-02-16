#pragma once
#include "Operation.h"

/* 
AdditionOperation extends AbstractOperation 
and defines the functions for addition 
*/
class AdditionOperation : public AbstractOperation {

public:
	/* The operation code for this operation */
	static const char OPERATION_CODE = '*';

	/*
	Desc: The zero parameter constructor 
	Pre: An operation code 
	Post: Puts the operation code in the base class
	Return: Nothing
	*/
	AdditionOperation() :AbstractOperation(OPERATION_CODE) { }

	/*
	Desc: Takes in two ints and adds them
	Pre: Two ints
	Post: Returns the added int
	Return: The result
	*/
	int perform(int x, int y) {
		return x + y;
	}

	/*
	Desc: Empty destructor
	Pre: AdditionOperation object
	Post: Destroys it
	Return:Nothin
	*/
	~AdditionOperation() { }
};