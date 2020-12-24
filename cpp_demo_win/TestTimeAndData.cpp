#pragma warning(disable : 4996) //关闭此文件的4996警告
#include "TestTimeAndData.h"
#include <iostream>
#include <time.h>
#include <windows.h>   

using namespace std;
void getTimeSuc() {
	SYSTEMTIME sys;
	GetLocalTime(&sys);
	printf("%4d/%02d/%02d %02d:%02d:%02d.%03d 星期%1d/n", sys.wYear, sys.wMonth, sys.wDay, sys.wHour, sys.wMinute, sys.wSecond, sys.wMilliseconds, sys.wDayOfWeek);
}

void TestTimeAndData::startTest()
{
	cout << "TestTimeAndData::startTest" <<endl;

	time_t t;  //秒时间  
	tm* local; //本地时间   
	tm* gmt;   //格林威治时间  
	char buf[128] = { 0 };

	t = time(NULL); //或者time(&t);//获取目前秒时间  
	cout << "1970-1-1,00:00:00至此：" << t <<"s" << endl;

	local = localtime(&t); //转为本地时间  
	strftime(buf, 64, "%Y-%m-%d %H:%M:%S", local);
	std::cout << "本地时间：" << buf << std::endl;

	gmt = gmtime(&t);//转为格林威治时间  
	strftime(buf, 64, "%Y-%m-%d %H:%M:%S", gmt);
	std::cout << "格林威治时间：" << buf << std::endl;
	getTimeSuc();
}
