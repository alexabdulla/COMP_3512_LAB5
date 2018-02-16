#include <iostream>
#include "RPNCalculator.h"
#include "Operation.h"


using namespace std;

/*Tests the RPN calculator*/
int main(void) {
	std::cout << "Enter your formula:\n";
	std::string formula;
	std::getline(std::cin, formula);
	std::cout << "You entered " << formula << std::endl;
	RPNCalculator calculator;
	int result = calculator.process_form(formula);
	std::cout << "The result is:\n";
	std::cout << result << std::endl;
	system("pause");
	return 0;
}