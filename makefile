main: RationalMain.o Rational.o
	g++ -pedantic -Wall RationalMain.o Rational.o -o main
RationalMain.o: RationalMain.cpp Rational.o
	g++ -Wall -pedantic RationalMain.cpp -c
Rational.o: Rational.cpp Rational.h
	g++ -Wall -pedantic Rational.cpp -c
