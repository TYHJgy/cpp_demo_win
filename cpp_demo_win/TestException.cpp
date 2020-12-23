#include "TestException.h"
#include <iostream>
using namespace std;

//�����µ��쳣
struct MyException : public exception
{
	const char* what() const throw ()
	{
		return "C++ Exception";
	}
};

double division(int a, int b)
{
	if (b == 0)
	{
		throw "Division by zero condition!";
	}
	return (a / b);
}


void testTryCatch() {
	cout << "\ntestTryCatch" << endl;
	int x = 50;
	int y = 0;
	double z = 0;

	try {
		z = division(x, y);
		cout << z << endl;
	}
	catch (const char* msg) {
		cerr << msg << endl;
	}
}

void testNewException() {
	cout << "\ntestNewException" << endl;
	try
	{
		throw MyException();
		//int i = division(10,0);
	}
	catch (MyException& e)
	{
		std::cout << "MyException caught" << std::endl;
		std::cout << e.what() << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << "�����Ĵ���" << std::endl;
	}
}
//�����κ��쳣
void testAnyTryCatch() {
	cout << "\ntestAnyTryCatch" << endl;
	int i = 0;
	try {
		int i2 = division(10, 0);
	}
	catch(...){
		cout << "�����쳣" << endl;
	}
}
void TestException::startTest(){
	cout << "\nstartTest" << endl; 
	testTryCatch();
	testNewException();
	testAnyTryCatch();
}
