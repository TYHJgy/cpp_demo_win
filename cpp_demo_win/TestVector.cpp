#include "TestVector.h"
#include "Box.h"
#include <vector>
#include <thread>
#include <iostream>

using namespace std;

void test()
{
	cout << "enter test" << endl;
}

void TestVector::starTest()
{
	cout << "enter starTest" << endl;
	vector<Box> bs;
	Box b1;
	bs.push_back(b1);
	cout << bs.size() << endl;

	cout << bs[0].getVolume() << endl;
	vector<thread> ts;
	thread th1(test);

	cout << ts.size() << endl;
	//ts.push_back(th1);//�����ᱨ��-2020-12-22 09:41:50-gy	
	th1.join();//��ʱ���̱߳�����ֱ�����߳�ִ�н�����


	
}
















