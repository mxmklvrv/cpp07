#include "whatever.hpp"
#include <iostream>










void test1(){

int a = 2;
int b = 3;

double c = 6.9;
double d = 6.66;

float e = 1.11f;
float f = 2.28f;


std::cout << "TEST_1 INT, DOUBLE, FLOAT" << std::endl;
std::cout << "Before swap"<< std::endl;
std::cout << "INTs: " << "a = " << a << ", b = " << b << std::endl;
std::cout << "DOUBLEs: " << "c = " << c << ", d = " << d << std::endl;
std::cout << "FLOATs: " << "e = " << e << ", f = " << f << std::endl;

::swap( a, b );
::swap( c, d );
::swap( e, f );

std::cout << std::endl;
std::cout << "After swap"<< std::endl;
std::cout << "INTs: " << "a = " << a << ", b = " << b << std::endl;
std::cout << "DOUBLEs: " << "c = " << c << ", d = " << d << std::endl;
std::cout << "FLOATs: " << "e = " << e << ", f = " << f << std::endl;

std::cout << std::endl;
std::cout << "MIN AND MAX" << std::endl;

std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
std::cout << "max( e, f ) = " << ::max( e, f ) << std::endl;
std::cout << std::endl;

std::cout << "EQUAL" << std::endl;

int j = 69;
int k = 69;

std::cout << "min( j, k ) = " << ::min( j, k ) << std::endl;
std::cout << "max( j, k ) = " << ::max( j, k ) << std::endl;
std::cout << std::endl;


}

void test2(){

std::cout << "TEST_2 STRINGS" << std::endl;

std::string c = "Maxim";
std::string d = "Maksim";

std::cout << "Before swap"<< std::endl;
std::cout << "c = " << c << ", d = " << d << std::endl;
::swap(c, d);
std::cout << "After swap"<< std::endl;
std::cout << "c = " << c << ", d = " << d << std::endl;

std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
}




int main(){

	test1();
	std::cout << std::endl;
	test2();
}
