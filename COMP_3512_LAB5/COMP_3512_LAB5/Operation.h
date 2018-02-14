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
class AbstractOperation : Operation {

};

