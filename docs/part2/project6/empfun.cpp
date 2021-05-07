#include <iostream.h>
#include <string.h>
//#include "employee.h"
int employee::employeeNo = 1000;//员工编号基数
employee::employee
{
    char str[20];
    cout<<"\n 输入雇员姓名:";
    cin>>str;
    name = new char[strlen(str)+1];//动态申请
    strcpy(name,str);
    EmpNo = employeeNo++;//新员工编号自动生成
    SUMPay = 0.0;//月薪总额初始0
}
employee::~employee()
{
    delete []name;//释放空间
}
void employee::displayStatus()
{
    cout<<name<<":"<<"编号:"<<EmpNo<<",本月工资"<<SUMPay<<endl;
}
technician::technician
{
    hourlyRate = 100;//每小时酬金100元
}
void technician::pay()
{
    cout<<"输入本月工作时数:";
    cin>>workHours;
    //计算月薪
    SUMPay = hourlyRate * workHours;
}
void technician::displayStatus()
{
    cout<<"兼职技术人员：";
    employee::displayStatus();
}
salesman::salesman()
{
    CommRate = 0.04;//提成比例
}
void salesman::pay()
{
    cout<<"输入本月销售额:";
    cin>>sales;
    SUMPay = sales*CommRate;//月薪=销售提成
}
void salesman::displayStatus()
{
    cout<<"推销员:";
    employee::displayStatus();
}
manager::manager()
{
    monthlyPay = 8000;
}
void manager::pay()
{
    SUMPay = monthlyPay;//月薪总额=固定月薪数
}
void manager::displayStatus()
{
    cout<<"经理:";
    employee::displayStatus();
}
