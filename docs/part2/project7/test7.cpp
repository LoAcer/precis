#include <iostream>
#include "people"
using namespace std;

void main()
{
    CPeople Zhang(65, 2000.00f, "张  飞");
    cout<<Zhang<<endl;//输出对象的值
    CPeople A,B;
    A.SetAge(34);
    A.SetSalary(4000.00f);
    cout<<A<<endl;
    B = A;
    cout<<B<<endl;
}
