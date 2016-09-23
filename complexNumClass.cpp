#include <iostream>
#include "complex.h"
using namespace std;


//My constructor
Complex::Complex(int r, int i) {
	imaginary = i;
	real = r;
}
//Overriding default constructor
Complex::Complex() {
	imaginary = 0;
	real = 0;
}

//setters
void Complex::setImg(int img0) {
	imaginary = img0;
}
void Complex::setReal(int real0) {
	real = real0;
}

//getters
int Complex::getreal() const { return real; }
int Complex::getimaginary()const { return imaginary; }

Complex Complex::addTo(Complex complex1, Complex complex2) {
	int realFinal = complex2.real + complex1.real;
	int realImaginary = complex2.imaginary + complex1.imaginary;
	Complex finalComplex(realFinal, realImaginary);
	cout << "Final number is " << finalComplex.getreal() << " + " << finalComplex.getimaginary() << "i";
	return finalComplex;
}

//overriding output operator for complex
ostream& operator<<(ostream& os, const Complex& c) {
	os << c.getreal() << " + " << c.getimaginary() << endl;
	return os;
}

//overriding the arithmetic operators
Complex operator+(const Complex& c1, const Complex& c2) {
	Complex cSum;
	cSum.setReal(c1.getreal() + c2.getreal());
	cSum.setImg(c1.getimaginary() + c2.getimaginary());
	return cSum;
}

Complex operator-(const Complex& c1, const Complex& c2) {
	Complex cDiff;
	cDiff.setReal(c1.getreal() - c2.getreal());
	cDiff.setImg(c1.getimaginary() - c2.getimaginary());
	return cDiff;
}
