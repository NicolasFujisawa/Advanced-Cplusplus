#include "Complex.h"
#include "Complex.h"

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

bool Complex::operator==(const Complex& other) const {
	return real == other.real && imaginary == other.imaginary;
}

bool Complex::operator!=(const Complex& other) const {
	return !(*this == other);
}

ostream& operator<<(ostream& out, const Complex& that) {
	out << "(" << that.getReal() << " + ";
	out << that.getImaginary() << "i)";
	return out;
}

Complex operator+(const Complex& c1, const Complex& c2) {
	return Complex(c1.getReal() + c2.getReal(), c1.getImaginary() + c2.getImaginary());
}
