#include "TestReferences.h"
#include <iostream>
using namespace std;

double vals[] = { 10.1, 12.6, 33.1, 24.1, 50.0 };

//��������Ϊ����ֵ
double& setValues(int i)
{
	return vals[i];   // ���ص� i ��Ԫ�ص�����
}
//��������Ϊ����ֵ����
void ReferencesAsReturn() {
	cout << "�ı�ǰ��ֵ" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << "vals[" << i << "] = ";
		cout << vals[i] << endl;
	}

	setValues(1) = 20.23; // �ı�� 2 ��Ԫ��
	setValues(3) = 70.8;  // �ı�� 4 ��Ԫ��

	cout << "�ı���ֵ" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << "vals[" << i << "] = ";
		cout << vals[i] << endl;
	}
}

//��������Ϊ����
void swap(int& x, int& y)
{
	int temp;
	temp = x; /* �����ַ x ��ֵ */
	x = y;    /* �� y ��ֵ�� x */
	y = temp; /* �� x ��ֵ�� y  */

	return;
}
//��������Ϊ��������
void ReferencesAsParameter() {
	// �ֲ���������
	int a = 100;
	int b = 200;

	cout << "����ǰ��a ��ֵ��" << a << endl;
	cout << "����ǰ��b ��ֵ��" << b << endl;

	/* ���ú���������ֵ */
	swap(a, b);

	cout << "������a ��ֵ��" << a << endl;
	cout << "������b ��ֵ��" << b << endl;

}

void TestReferences::startTest()
{
	ReferencesAsParameter();	//��������Ϊ��������
	ReferencesAsReturn();		//��������Ϊ����ֵ����
}
