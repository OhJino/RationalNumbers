/*
Jino Enriquez
*/


#include <iostream>
#include "Rational.h"
using namespace std;


int main()
{

	Rational r1(1, 6);
	Rational r2(5, 12);
	cout << endl << "RA: ";
	r1.display();
	cout << endl;
	r1.add(r2);
	r1.display();
	r1.sub(r2);
	r1.display();
	r2.mult(r1);
	r2.display();
	r2.div(r1);
	r2.display();
	cout << endl << endl;
	return 0;
}

