#pragma once
#include "Operation.h"

/*
Defines a MultiplicationOperation 
and extends AbstractOperation
*/
class MultiplicationOperation : public AbstractOperation {
	
public:
		/*The opCode of this operation */
		static const char OPERATION_CODE = '*';

		/*
		Desc: An empty constructor
		Pre: A MultiplicationOperation
		Post: Puts this opCode up to the base class
		Return: Nothing
		*/
		MultiplicationOperation():AbstractOperation(OPERATION_CODE) { }

		/*
		Desc: Performs this operation on two ints
		Pre: Two ints
		Post: Performs the operation
		Return: A result
		*/
		int perform(int x, int y) {
			return x * y; 
		}
		/*
		Desc: Destructor!
		Pre: A MultiplicationOperation object
		Post: Destruction
		Return: Nothing
		*/
		~MultiplicationOperation() { }
};