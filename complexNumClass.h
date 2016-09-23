#include <iostream>

	class Complex {
	public:
		Complex();
		Complex(int r, int i);
		//setters
		void setImg(int img0);
		void setReal(int real0);
		//getters
		int getreal() const;
		int getimaginary()const;
		Complex addTo(Complex complex1, Complex complex2);
	private:
		int real;
		int imaginary;
	};

	//Overriding output operator
	std::ostream& operator<<(std::ostream& os,const Complex& c);

	//Overriding arithmetic operator
	Complex operator+(const Complex& c1, const Complex& c2);
	Complex operator-(const Complex& c1, const Complex& c2);
