#include <iostream>
#include "ginaComplex.h"
using namespace std;


int main(){
	Complex complex1(1, 2);
	Complex complex2(2, 3);
	Complex complexSum = complex1 + complex2;
	cout << complexSum;

	Complex complex3(4, 9);
	Complex complex4(5, 3);
	Complex complexDiff = complex3 - complex4;
	cout << complexDiff;
	cin.get();
return 0;
}
