#include "People.h"
#include <string>
using namespace std;

CPeople::CPeople()
{
    m_nAge = 20;
    m_fSalary = 3000.00f;
    m_pstrName = new char[20];
    strcpy(m_pstrName,"无名氏");
}
CPeople::CPeople(int age, float salary,char *name)
{
    m_nAge = age;
    m_fSalary = salary;
    m_pstrName = name;
    strcpy(m_pstrName, name);
}
CPeople::~CPeople()
{
    if(m_pstrName != NULL)
        delete []m_pstrName;
}
int CPeople::GetAge() const
{
    return m_nAge;
}
void CPeople::SetAge(int age)
{
    m_nAge = age;
}
float CPeople::GeSalary() const
{
    if (m_nAge < 20)
        return 0;
    else if (GetAge() > 60)
        return m_fSalary / 2；
    else
        return m_fSalary;
}
void CPeople::SetSalary(float num)
{
    m_fSalary = num;
}
//赋值运算符重载的实现
CPeople &CPeople::operator=(const CPeople &AnotherPeople)
{
    if(this == &AnotherPeople) //检查自赋值
        return this;
    if (m_pstrName)
        delete [] m_pstrName;//释放原有的内存资源
    m_nAge = AnotherPeople.m_nAge;
    m_fSalary = AnotherPeople.m_fSalary;
    //分配新的内存资源，并复制内容
    m_pstrName = new char[strlen(AnotherPeople.m_pstrName) + 1];
    strcpy(m_pstrName,AnotherPeople.m_pstrName);
    return *this;
}
// 输出运算符重载函数的实现
ostream &operator<<(ostream &stream, const CPeople &p)
{
    stream<<"姓名："<<p.m_pstrName<<","<<"年龄："<<p.GetAge()<<","<<"薪水："<<p.GetSalary();
    return stream;
}
