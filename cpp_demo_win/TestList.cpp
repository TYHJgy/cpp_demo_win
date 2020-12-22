#include"TestList.h"
#include <list>
#include <iostream>

using namespace std;
void TestList::startTest()
{
    cout << "startTest" <<endl;

    list<int> the_list;
    for (int i = 0; i < 10; i++)
        the_list.push_back(i);
#if 0
    auto it = the_list.begin();//auto 自动类型，等同于list<int>::iterator 
#else
    list<int>::iterator it = the_list.begin();
#endif
    cout << *it << " ";
    ++it;
    while (it != the_list.end()){
        cout << *it << " ";
        ++it;
    }
    cout<<endl;
    while (!the_list.empty()){
        cout << the_list.front() << endl;
        the_list.pop_front();
    }
}
