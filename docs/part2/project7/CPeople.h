#include <iostream>
using namespace std;
class CPeople
{
    int m_nAge;
    float m_fSalary;
public:
    char *m_pstrName;

    CPeople();
    ~CPeople();
    CPeople(int age,float salary,char *name);
    float GetSalary() const;
    void SetSalary(float);
    int GetAge() const;
    void SetAge(int age);
    CPeople &operator=(const CPeople &AnotherPeople);
    friend ostream &operator<<(ostream &stream, const CPeople &p);
};
