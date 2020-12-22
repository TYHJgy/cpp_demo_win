
#include <iostream>
#include <iomanip>
#include <string.h>

#include "Box.h"
#include "Line.h"
#include "SmallBox.h"
#include "PrintData.h"
#include "Shape.h"
#include "TestThread_std.h"
#include "TestVector.h"
#include "TestReferences.h"
#include"TestList.h"
#include <queue>
#include "TestTemplate.h"
#include <map>
using namespace std;
using std::setw;


void testline() {
	cout << "enter testline" << endl;
	Line line;

	// 设置长度
	line.setLength(6.0);
	cout << "Length of line : " << line.getLength() << endl;

	// 不使用成员函数设置长度
	line.length = 10.0; // OK: 因为 length 是公有的
	cout << "Length of line : " << line.length << endl;
}
void testBox() {
	cout << "enter testBox" << endl;
	Box Box1;                // 声明 Box1，类型为 Box
	Box Box2;                // 声明 Box2，类型为 Box
	double volume = 0.0;     // 用于存储体积

	// box 1 详述
	Box1.setLength(6.0);
	Box1.setBreadth(7.0);
	Box1.setHeight(5.0);

	// box 2 详述
	Box2.setLength(12.0);
	Box2.setBreadth(13.0);
	Box2.setHeight(10.0);

	// box 1 的体积
	volume = Box1.getVolume();
	cout << "Box1 的体积：" << volume << endl;

	// box 2 的体积
	volume = Box2.getVolume();
	cout << "Box2 的体积：" << volume << endl;
}
void testSmallBox() {
	cout << "enter testSmallBox" << endl;
	SmallBox box;
	// 使用成员函数设置宽度
	box.setSmallWidth(5.0);
	cout << "Width of box : " << box.getSmallWidth() << endl;
}
//测试友元函数
void testFriendMethod() {
	cout << "enter testFriendMethod" << endl;
	Box box;
	// 使用成员函数设置宽度
	box.setWidth(10.0);
	// 使用友元函数输出宽度
	printWidth(box);
}
//测试打印
void testPrintData()
{
	cout << "enter testPrintData" << endl;

	PrintData pd;

	// 输出整数
	pd.print(5);
	// 输出浮点数
	pd.print(500.263);
	// 输出字符串
	char c[] = "Hello C++";
	pd.print(c);
}
//测试多态、命名空间、接口、抽象类、虚方法
void testDerivedClass() {
	cout << "enter testDerivedClass" << endl;

	myShape::Shape* shape;
	myShape::Shape shape2(10,7);
	myShape::Rectangle rec(10, 7);
	myShape::Triangle  tri(10, 5);

	shape2.area();
	// 存储矩形的地址
	shape = &rec;
	// 调用矩形的求面积函数 area
	shape->area();

	// 存储三角形的地址
	shape = &tri;
	// 调用三角形的求面积函数 area
	shape->area();

}
//测试字符串
void testString() {
	cout << "enter testString" << endl;

	string str1 = "Hello";
	string str2 = "World";
	string str3;
	int  len;

	// 复制 str1 到 str3
	str3 = str1;
	cout << "str3 : " << str3 << endl;

	// 连接 str1 和 str2
	str3 = str1 + str2;
	cout << "str1 + str2 : " << str3 << endl;

	// 连接后，str3 的总长度
	len = (int)str3.size();
	cout << "str3.size() :  " << len << endl;

}
//测试数组
void testArray() {
	cout << "enter testArray" << endl;
	int n[10]; // n 是一个包含 10 个整数的数组

	// 初始化数组元素          
	for (int i = 0; i < 10; i++)
	{
		n[i] = i + 100; // 设置元素 i 为 i + 100
	}
	cout << "Element" << setw(13) << "Value" << endl;

	// 输出数组中每个元素的值                     
	for (int j = 0; j < 10; j++)
	{
		cout << setw(7) << j << setw(13) << n[j] << endl;
	}

}
//测试动态内存
void testNewAndDelete() {
	cout << "enter testNewAndDelete" << endl;

	double* pvalue = NULL; // 初始化为 null 的指针
	pvalue = new double;   // 为变量请求内存

	*pvalue = 29494.95;     // 在分配的地址存储值
	cout << "Value of pvalue : " << *pvalue << endl;
	
	delete pvalue;         // 释放内存

	int* array = new int[5];
	for (int i = 0; i < 5; i++)
	{
		array[i] = i;
	}
	for (int i = 0; i < 5; i++)
	{
		cout << array[i] << endl;
	}
	Box* box = new Box();
	cout << box->getVolume() << endl;


}
//测试C++线程
void testThread() {
	cout << "testThread" << endl;
	TestThread_std testThread_std;
	testThread_std.startTest();
}
//测试Vector
void testVector() {
	cout << "testVector" << endl;
	TestVector testVector;
	testVector.starTest();
}
//测试引用
void testReferences() {
	cout << "testReferences" << endl;
	TestReferences  testReferences;
	testReferences.startTest();
}
//测试list
void testList() {
	cout << "testList" << endl;
	TestList testList;
	testList.startTest();
}
//测试队列
void testQueues() {
	std::queue<int> myqueue;
	int sum(0);

	for (int i = 1; i <= 10; i++) 
		myqueue.push(i);

	while (!myqueue.empty())
	{
		sum += myqueue.front();
		myqueue.pop();
	}

	std::cout << "total: " << sum << '\n';
}
//测试map
void testMap() {
	map<int, string> mapStudent;
	mapStudent.insert(map<int,string>::value_type(1, "student_one"));
	mapStudent.insert(map<int,string>::value_type(2, "student_two"));
	mapStudent.insert(map<int,string>::value_type(3, "student_three"));
	map<int, string>::iterator iter;
	for (iter = mapStudent.begin(); iter != mapStudent.end(); iter++)
		cout << iter->first << ' ' << iter->second << endl;
}
//测试模板
void testTemplates() {
	TestTemplate testTemplates;
	testTemplates.startTest();
}

int main()
{
	cout << "main" << endl;
#if 0
	testBox();
	testline();
	testSmallBox();
	testFriendMethod();
	testPrintData();
	testDerivedClass();
	testString();
	testArray();
	testNewAndDelete();
	testThread();
	testReferences();
	testVector();
	testList();
	testMap();
#endif
	testMap();
	return 0;
}
