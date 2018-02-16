#pragma once

/* Defines the virtual operation interface*/
class Operation {
	
public: 
		/*
		Desc:A virtual method to retun the operation code
		Pre: Nothing
		Post: Nothing
		Return: Nothing
		*/
		virtual char get_code() = 0;

		/*
		Desc:A virtual method to perform an operation on two ints
		Pre: Two ints
		Post: Nothing
		Return: Nothing
		*/
		virtual int perform(int, int) = 0;
		
		/*
		Desc:A virtual destructor
		Pre: Nothing
		Post: Nothing
		Return: Nothing
		*/
		~Operation() { };

};

// this class implements operation
class AbstractOperation : public Operation {

	private:
		/* A variable to represent the operation type*/
		char operation_type; 

	public:
		/*
		Desc: One parameter constructor 
		Pre: AbstractOperation object
		Post: Creates an AbstractOperation object 
		Return: Nothing
		*/
		AbstractOperation(char mathOp) {
			operation_type = mathOp;
		}

		/*
		Desc:A method to retun the operation code
		Pre: An AbstractOperation
		Post: Returns an opType
		Return:An operation type
		*/
		char get_code() {
			return operation_type;
		}

		/*
		Desc:A destructor
		Pre: An AbstractOperation
		Post: Nothing
		Return: Nothing
		*/
		~AbstractOperation()
		{

		}
};

