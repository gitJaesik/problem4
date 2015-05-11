#pragma once

#include <iostream>

using namespace std;


// 문제 내용
// "Create a class called Complex"
class Complex
{
public:
// 문제 내용
// Provide a constructor
	Complex();
	Complex(double a, double b);
	~Complex();

// 문제 내용
// Use double variables to represent the private data of the class.
private:
	double m_dRealPart;
	double m_dImaginaryPart;
public:
	// 문제내용 : Printing Complex numbers in the form (a, b)
	void PrintingComplexNumber();

	// = 연산자 구현
	void operator=(const Complex& other);
	//Complex& operator=(const Complex& other);
	
	// 문제내용
	// Adding two Complex numbers, Substracting, and, simuldate the operator (+, -, +=, -=)
	Complex operator+(const Complex& other);
	Complex operator-(const Complex& other);
	void operator+=(const Complex& other);
	void operator-=(const Complex& other);
};

