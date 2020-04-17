#include "complex.h"

Complex::Complex() : 
	real(0), imaginary(0) { 
}

Complex::Complex(double real, double imaginary) :
	real(real), imaginary(imaginary) {
}

Complex::Complex(const Complex& that) {
	real = that.real;
	imaginary = that.imaginary;
}

const Complex& Complex::operator=(const Complex& that) {
	real = that.real;
	imaginary = that.imaginary;;

	return *this;
}

std::ostream& operator<<(std::ostream& out, const Complex& that) {
	out << "(" << that.getReal() << " + ";
	out << that.getImaginary() << "i)";
	return out;
}
