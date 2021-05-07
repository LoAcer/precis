#include <iostream>
#include <string>
using namespace std;
void main()
{
    //经理：
    manager m1;
    m1.pay();
    m1.displayStatus();
    //兼职技术人员：;
    technician t1;
    t1.pay();
    t1.displayStatus();
    //兼职推销员：;
    salesman s1;
    s1.pay();
    s1.displayStatus();
    cout<<"\n 使基类指针指向子类对象"<<endl;
    employee *ptr[4] = {&m1, &t1, &s1};
    for(int i=0;i<3;i++)
        ptr[i]->displayStatus();
}
