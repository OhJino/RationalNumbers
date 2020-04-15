/*
 Jino Enriquez
 */


//Preprocessor Command starts with #
#ifndef _RATIONAL_H_JE_
#define _RATIONAL_H_JE_

#include <iostream>
using namespace std;

class Rational
{
	int _p;
	int _q;
	void _verify();
public:
	Rational();  //constructor
	Rational(int P, int Q = 1);  //constructor
	void display() const; // _p:_q
	void add(const Rational&)
	void sub(const Rational&)
	void mult(const Rational&);
	void div(const Rational&);
};
#endif
