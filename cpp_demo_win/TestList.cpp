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

    cout << "\n����һ��Ԫ�ص�the_list��2��λ��" << endl;
    the_list.insert(++the_list.begin(), 22);
#if 0
    auto it = the_list.begin();//auto �Զ����ͣ���ͬ��list<int>::iterator 
#else
    list<int>::iterator it = the_list.begin();//����������ָ�룬����ģ�壬���ֵ� �� ָ�롣
#endif
    cout << "\nthe_list:" << *it << " " ;
    ++it;
    while (it != the_list.end()){
        cout << *it << " " ;
        ++it;
    }
    cout<<endl;
    list<int> the_list2;
    cout << "\n��the_list��ֵ��the_list2��\n��ֵǰthe_list2��С��" << the_list2.size() << endl;
    //the_list2.assign(8, 1);//��ֵ8��1
    the_list2.assign(the_list.begin(), the_list.end());//��the_list��ֵ��the_list2
    cout << "��ֵ��the_list2��С��" <<the_list2.size() << endl;
    cout << "the_list2��һ��Ԫ�أ�" << the_list2.front() << endl;
    cout << "the_list2���һ��Ԫ�أ�" << the_list2.back() << endl;
    cout << "\n���the_list" << endl;
    while (!the_list.empty()) {
        the_list.pop_front();
    }
}
