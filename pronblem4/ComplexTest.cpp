// 문제 내용
// "Write a program to test your class"
// Write a main() demonstration program to test your class, functions, and operators.
#include <iostream>
#include "Complex.h"

using namespace std;

void main(void)
{
	Complex c1;
	c1.PrintingComplexNumber();
	cout << endl;

	Complex c2(1, 2);
	c2.PrintingComplexNumber();
	cout << endl;

	Complex c3(10, 20);
	c3.PrintingComplexNumber();
	cout << endl;

	// + 연산
	c1 = c2 + c3;
	c1.PrintingComplexNumber();
	cout << endl;

	// - 연산
	c1 = c3 - c2;
	c1.PrintingComplexNumber();
	cout << endl;

	c2 += c3;
	c2.PrintingComplexNumber();
	cout << endl;

	c3 -= c2;
	c3.PrintingComplexNumber();
	cout << endl;

}
