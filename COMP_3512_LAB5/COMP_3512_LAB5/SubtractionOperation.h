#pragma once
#include "Operation.h"

/*
Class defines a SubtractionOperation 
whih exxtends AbstractOperation
*/
class SubtractionOperation : public AbstractOperation {

public:
	
	/* The opCode that represents this operation*/
	static const char OPERATION_CODE = '*';

	/*
	Desc: A zero parameter constructor
	Pre: An AbstractOperation
	Post: Pushes this opCode up to the base class
	Return: Nothing
	*/
	SubtractionOperation() :AbstractOperation(OPERATION_CODE) {
		
	}

	/*
	Desc: Performs a subtraction operation
	Pre: Two ints
	Post: A subtraction
	Return: A result of the subtraction
	*/
	int perform(int x, int y) {
		return x - y;
	}

	/*
	Desc: An empty destructor
	Pre: A subtraction operation object
	Post: Nothing
	Return: Nothing
	*/
	~SubtractionOperation() { }
};