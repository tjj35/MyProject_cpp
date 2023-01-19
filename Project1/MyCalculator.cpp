#include <iostream>
#include "Calculator.h"
using namespace std;

int main(){
	cout << "This is my calculator!" << endl;
	

	double a = 0.0;
	double b = 0.0;
	double result = 0.0;
	char oper = '+';
	int esc = 1; //esc用于退出循环

	Calculator c;
	while (true) {
		cout << "Please enter the operation to perform. Format: a+b | a-b | a*b | a/b"
			<< endl;
		cin >> a >> oper >> b;
		if (b == 0 && oper == '/') {
			cout << "The divisor cannot be 0!" << endl << endl;
			continue;
		}
		result = c.Calculate(a, oper, b);
		cout << "Result is: " << result << endl;
		cout << "enter 1 to continue, 0 to exite, " << endl ;
		cin >> esc;
		if (esc == 0) {
			cout << endl;
			break;
		}
	}
	return 0;
}