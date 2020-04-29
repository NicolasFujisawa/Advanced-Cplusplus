#pragma once
#include <iostream>

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
	friend std::ostream& operator<<(std::ostream& out, const Complex& that);

};

