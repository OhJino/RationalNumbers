/*
Jino Enriquez
*/
#include "Rational.h"

int gcd( int p, int q)
{
	if ( q == 0)
		return p;
	else
		return gcd(q, p % q);
}

int abs( int x)
{
	return ((x >= 0) ? x : (-1 * x));
}

Rational::Rational()//constructor
{
	_q = 3;
	_p = 23;
	_verify();
}

Rational::Rational(int P, int Q)
{
	_p = P;
	_q = Q; 
	_verify();
}


void Rational::display() const // _p:_q
{
	cout << _p << ":" << _q << endl;
}


void Rational::add(const Rational& r) //These are all methods
{	
	_p = ((_p * r._q) + (r._p * _q));
	_q *= r._q;
	_verify();
}

void Rational::sub(const Rational& r)	//or member functions
{	
	_p = ((_p * r._q) - (r._p * _q));
	_q *= r._q;	
	_verify();
}

void Rational::mult(const Rational& r)
{	
	_p *= r._p;
	_q *= r._q;
	_verify();
}

void Rational::div(const Rational& r)
{
	if( r._p != 0 )
	{
		mult(Rational(r._q, r._p));
	}
}

void Rational::_verify()
{
	if ( _q <= 0 )
	{
		if ( _q == 0 )
		{
			_q = 1;
		}
		else
		{
			_q *= -1;
			_p *= -1;
		}
	}
	int GCD = gcd(abs(_p), (abs(_q)));
			_p /= GCD;
			_q /= GCD;
}

