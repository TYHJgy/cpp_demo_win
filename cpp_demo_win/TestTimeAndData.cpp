#pragma warning(disable : 4996) //�رմ��ļ���4996����
#include "TestTimeAndData.h"
#include <iostream>
#include <time.h>
#include <windows.h>   

using namespace std;
void getTimeSuc() {
	SYSTEMTIME sys;
	GetLocalTime(&sys);
	printf("%4d/%02d/%02d %02d:%02d:%02d.%03d ����%1d/n", sys.wYear, sys.wMonth, sys.wDay, sys.wHour, sys.wMinute, sys.wSecond, sys.wMilliseconds, sys.wDayOfWeek);
}

void TestTimeAndData::startTest()
{
	cout << "TestTimeAndData::startTest" <<endl;

	time_t t;  //��ʱ��  
	tm* local; //����ʱ��   
	tm* gmt;   //��������ʱ��  
	char buf[128] = { 0 };

	t = time(NULL); //����time(&t);//��ȡĿǰ��ʱ��  
	cout << "1970-1-1,00:00:00���ˣ�" << t <<"s" << endl;

	local = localtime(&t); //תΪ����ʱ��  
	strftime(buf, 64, "%Y-%m-%d %H:%M:%S", local);
	std::cout << "����ʱ�䣺" << buf << std::endl;

	gmt = gmtime(&t);//תΪ��������ʱ��  
	strftime(buf, 64, "%Y-%m-%d %H:%M:%S", gmt);
	std::cout << "��������ʱ�䣺" << buf << std::endl;
	getTimeSuc();
}
