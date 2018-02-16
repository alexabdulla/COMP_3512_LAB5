#pragma once

class Operation {
	public: 
		// purely virtual?
		virtual char get_code() = 0;

		// purely virtual?
		virtual int perform(int, int) = 0;
		
		// inline empty implemetation?
		~Operation() { };

		//testing

};

// this class implements operation
class AbstractOperation : public Operation {
	private:
		char operation_type; 

	public:
		AbstractOperation(char mathOp) {
			operation_type = mathOp;
		}

		char get_code() {
			return operation_type;
		}

		~AbstractOperation()
		{

		}
};

