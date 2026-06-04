#include "iter.hpp"


template <typename T>
void print(T& res){
	std::cout << res;
}

template <typename T>
void add(T& var){
	var+= 2;
}

void makeSmall(char c){
	char small = std::towlower(c);
	std::cout << small;
}


void test1(){
	int arr[] = {1, 2, 3, 4, 5};
	std::cout << "TEST_1 INT PRINT AND ADDITION" << std::endl;
	std::cout << "Before :";
	::iter(arr, 5, print<int>);
	std::cout << std::endl;
	std::cout << "After : ";
	::iter(arr, 5, add<int>);
	::iter(arr, 5, print<int>);
	std::cout << std::endl;
}


void test2(){
	char arr[] = {'a', 'b', 'c'};
	std::cout << "TEST_2 CHAR PRINT AND ADDITION" << std::endl;
	std::cout << "Before :";
	::iter(arr, 3, print<char>);
	std::cout << std::endl;
	std::cout << "After : ";
	::iter(arr, 3, add<char>);
	::iter(arr, 3, print<char>);
	std::cout << std::endl;
}

void test3(){
	char arr[] = {'A', 'B', 'C'};
	std::cout << "TEST_3 CHAR PRINT AND MAKE_SMALL" << std::endl;
	std::cout << "Before :";
	::iter(arr, 3, print<char>);
	std::cout << std::endl;
	std::cout << "After : ";
	::iter(arr, 3, makeSmall);
	std::cout << std::endl;
}

void test4(){
	std::cout << "TEST_4 CONST " << std::endl;
	const std::string arr[] = {"My", "name", "is", "Jeff"};
	::iter(arr, 4, print<const std::string>);
	std::cout << std::endl;

}



int main(){
	test1();
	test2();
	test3();
	test4();
}