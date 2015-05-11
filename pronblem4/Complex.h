#pragma once

#include <iostream>

using namespace std;


// ���� ����
// "Create a class called Complex"
class Complex
{
public:
// ���� ����
// Provide a constructor
	Complex();
	Complex(double a, double b);
	~Complex();

// ���� ����
// Use double variables to represent the private data of the class.
private:
	double m_dRealPart;
	double m_dImaginaryPart;
public:
	// �������� : Printing Complex numbers in the form (a, b)
	void PrintingComplexNumber();

	// = ������ ����
	void operator=(const Complex& other);
	//Complex& operator=(const Complex& other);
	
	// ��������
	// Adding two Complex numbers, Substracting, and, simuldate the operator (+, -, +=, -=)
	Complex operator+(const Complex& other);
	Complex operator-(const Complex& other);
	void operator+=(const Complex& other);
	void operator-=(const Complex& other);
};

