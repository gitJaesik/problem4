#include "Complex.h"
#include <iostream>

using namespace std;

// 문제내용
// Provide a constructor..
// The constructor should contain default values ==> double defualt value 0.0
Complex::Complex()
{
	m_dRealPart = 0.0;
	m_dImaginaryPart = 0.0;
}

// Provide a constructor that enables an object of this class to be initialized when it is declared.
Complex::Complex(double a, double b)
{
	m_dRealPart = a;
	m_dImaginaryPart = b;
}

Complex::~Complex()
{
}


// 문제내용 : Printing Complex numbers in the form (a, b)
void Complex::PrintingComplexNumber()
{
	cout << "(" << m_dRealPart << ", " << m_dImaginaryPart << ")";
}

// = 연산자 구현
void Complex::operator=(const Complex& other)
{
	// this는 왼쪽에 있는 Complex 객체
	this->m_dRealPart = other.m_dRealPart;
	this->m_dImaginaryPart = other.m_dImaginaryPart;
}

// 문제내용
// Adding two Complex numbers, Substracting, and, simuldate the operator (+, -, +=, -=)
Complex Complex::operator+(const Complex& other)
{
	Complex result;
	result.m_dRealPart = this->m_dRealPart + other.m_dRealPart;
	result.m_dImaginaryPart = this->m_dImaginaryPart + other.m_dImaginaryPart;

	return result;
}
Complex Complex::operator-(const Complex& other)
{
	Complex result;
	result.m_dRealPart = this->m_dRealPart - other.m_dRealPart;
	result.m_dImaginaryPart = this->m_dImaginaryPart - other.m_dImaginaryPart;

	return result;
}
void Complex::operator+=(const Complex& other)
{
	this->m_dRealPart = this->m_dRealPart + other.m_dRealPart;
	this->m_dImaginaryPart = this->m_dImaginaryPart + other.m_dImaginaryPart;
}
void Complex::operator-=(const Complex& other)
{
	this->m_dRealPart = this->m_dRealPart - other.m_dRealPart;
	this->m_dImaginaryPart = this->m_dImaginaryPart - other.m_dImaginaryPart;
}
