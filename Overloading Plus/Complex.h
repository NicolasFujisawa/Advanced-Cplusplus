#pragma once
#include <iostream>

using namespace std;


class Complex {
private:
	double real;
	double imaginary;

public:
	Complex();
	Complex(double real, double imaginary);
	Complex(const Complex& that);
	const Complex& operator=(const Complex& that);
	double getReal() const {
		return real;
	}
	double getImaginary() const {
		return imaginary;
	}
	bool operator==(const Complex& other) const;
	bool operator!=(const Complex& other) const;
	Complex operator*() const;
};
ostream& operator<<(ostream& out, const Complex& that);

Complex operator+(const Complex& c1, const Complex& c2);
