#include "Calculator.h"

double Calculator::Calculate(double a, char opr, double b)
{
	switch (opr) {
	case '+':
		return a + b;
	case '-':
		return a - b;
	case '*':
		return a * b;
	case '/':
		return a / b;
	default:
		return 0.0;
	}

}
