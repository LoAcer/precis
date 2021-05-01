撒旦卡死每年的客户NSA
# 第二部分《C++程序设计》实践环节考核规定
## 2.1.《C++程序设计》实践环节考核大纲

一、考核类型

上机考核

二、目的要求

《C++语言程序设计》是计算机科学与应用专业、信息管理专业(本科)的必修课,
是培养学生实践动手能力的一门重要专业课程,是为满足计算机应用领域与计算机应
用人才的需要而设置的。C++语言是一种面向对象的编程语言,它集抽象性、封装性、
继承性和多态性等面向对象特征于一体,可以帮助人们开发出具有较高数据抽象程
度,能够充分体现信息隐蔽、软件重用、易修改、易扩充等特性的大型软件。

《C++程序设计》的实验采用`Microsoft Visual+6.0`。通过上机实践,加深对课
程的理解,更好地掌握C++面向对象程序设计的基本方法,增强实际动手能力。

三、考核环境

硬件:586以上的PC系列机,主频大于166MHz,内存大于256MB,硬盘空间大
于500MB。

软件:中文`Windows2000/NT/XP`操作系统, `Microsoft Visual C++ 6.0`。

四、考核方法

考生抽取试题后,在45分钟内,完成试卷中所要求的全部内容,并作必要的记录。
考核结束后,考生上交试卷。上机考核成绩由现场老师初评,经考点负责人审核签名,
报主考院校核定。成绩分合格、不合格两类。

五、考核内容

- 掌握`Microsoft Visual C++ 6.0`集成开发环境的使用,新建工程,编辑含有类
的C++源文件,存取文件,编译文件,调试程序和运行程序。
- 模板。包括:函数模板、类模板,练习编制函数模板和类模板。
- 熟悉面向对象编程思想和多文件编程规范。
- 掌握公有继承的赋值兼容性规则、构造函数、复制构造函数和析构函数的设计方法。
- 练习使用向量解决实际问题。
- 熟悉各类运算符的重载。
- 熟悉使用文件的基本方法。
- 熟悉继承和包含以及虚函数的多态性。

六、参考书目

    1.刘振安主编,C++程序设计》,机械工业出版社2008年
    2.薛万鹏译,《C++程序设计教程》,机械工业出版社,2005年
    3.钱能,《C++程序设计教程》,清华大学出版社,2006年

### 2.2《C++程序设计》上机考核指导
《C++语言程序设计》是一门实践性很强的课程,必须通过反复上机练习,深入领
悟面向对象程序设计的基本思想。通过实验教学加深理解和巩固课堂和教材所学的内
容,提高实践动手能力。

    实验一 Microsoft Visual+6.0集成开发环境的使用
一、实验目的与要求

了解并初步掌握 Microsoft Visual+++6.0集成开发环境的使用。

二、实验内容

(1)创建项目(Project)
- 启动C++6.0
- 从主菜单中选择【文件】|【新建】命令，打开【新建】对话框，单击【工程】
标签,从项目列表中单击`Win32 Console Application`选项;在【工程】文本框
中输入项目的名字,如“hello”,系统将自动为用户的项目分配一个默认的目录。
- 如果是`Visual C++6.0`,系统将显示一个询问项目类型的程序向导,选择`an
emptyproject`选项,单击【完成】按钮,显示新建项目信息;单击【确定】按钮结束。

(2)添加程序代码
- 从主莱单中选择【文件】|【新建】命令,打开【新建】对话框。
● 在【新建】对话框中打开【文件】选项卡,单击`C++ Source File`选项,建立源
文件;选中“添加工程”复选框;在右边的“文件”文本框中为文件指定一个名
字,如“hello”。
- 编辑源文件。在【工作区】窗口中单击 FileVIEW标签,选择并打开该窗口中
SourceFiles下的文件,如 hello.cpp,在打开的【文件】窗口中输入源程序。
- 在项目文件中增加文件。若在已有的项目文件中增加一个新文件,如c++源文件
“\*.cpp”或头文件“*.h”需要执行以下操作。打开应的项目文件,选择【新
建】|【文件】命令,选择c++编辑栏Source选项可增加C++源文件;或选择C/C++
Head File选项增加/C++头文件。在【文件】文本框输入文件名,单【确定】按钮。

(3)编译源文件

先激活相应的源程序窗口,选择【编译】|【编译】命令或按Ctrl+F7键来编译源文件,形成目标文件(生成.obj文件),若该项目中有多个源文件,可依次微活并编译。

(4)链接日标程序,形成可执行文件

选择【编译】|【链接】命令或按快捷键F7链接程序,并形成可执行文件。此命令也可直接将项目中的所有源文件进行编译并链接形成可执行文件,使编译和链接的过程结合在一起。

(5)运行程序

选择【编译】丨【执行】命令或使用快捷键Ctr+F5运行该程序,将显示一个类似于DOS的窗口,在窗口中第一行输出“hello,world!,第二行输出“Press anykey to continue,提示用户按任意键回到开发环境。

三、程序练习

定义一个关于日期的类,然后声明对象,判断该日期是否为闰年并输出。本题练习的是定义类和使用类的方法。
源程序代码:
```C++
#include "iostream"
using namespace std;
class TDate
{
public:
    void SetDate(int y, int m,int d);
    int isLeapYear();
    void Print();
private:
    int year, month, day;
};
void TDate::SetDate (int y, int m,int d)
{
    year=y;
    month=m;
    dayed;
}
int TDate:: isLeapYear()
{
    return (year%4==0 && year%100!=0) || (year%400=0);
}
void TDate::Print()
{
    cout<<year<<"."<<month<<"."<<day<<endl;
}
void main()
{
    TDate datel, date2;
    datel.SetDate(2004,5,4);
    date2.SetDate (2005,4,9);
    int leap=date1.isLeapYear();
    datel.Print();
    if (leap==1)
        cout<<"是闰年!"<<endl;
    else
        cout<<"不是闰年!"<<endl;
    date2.Print();
    leap=date2.isLeapYear();
    if (leap==1)
        cout<<"是闰年!"<<endl;
    else
        cout<"不是闰年!"<<endl;
}
```

四、实验要求

按要求编写实验程序,将实验程序调试运行,写出程序的运行结果,并提交实验报告,写出调试运行的分析和体会。

    实验二类和对象的使用
一、实验目的和要求

(1)熟悉类的定义格式和类中成员的访问权限。

(2)掌握对象的定义方法以及对象的初始化和赋值的操作。

(3)掌构造函数和析构函数的使用。

二、实验内容

1、编写个程序,定义类 CPeople包个人信息姓名、年龄、薪水。并在类中定义构造函数、析构函数。题目分析:注意构造函数、析构函数的定义规则。

源程序代码:
```
#include "iostream"
#include <string>
using namespace std;
//类 CPeople的定义
class CPeople
{
    int m_nAge;
    float m_fSalary;
    char* m_pstrName;
public:
    CPeople();//缺省构造函数
    CPeople(int age, float salary, char* name);//带参数构造函数
    CPeople(const CPeople &);                   //拷贝构造函数
    -CPeople();                                 //析构函数
    char *GetName();
    float Getsalary();
    void SetSalary(float);
    int GetAge();
    void SetAge (int age);
};
CPeople::CPeople() //缺省构造函数,给创建的对象的每个成员
赋默认值
{
    m_nAge = 20;
    m_fSalary=3000.00f;
    m_pstrName = new char[20];//用new操作符为字符指针m_pstrName分配空间
    strcpy(m_pstrName,"无名氏");
}

 CPeople::CPeople(int age, float salaty, char *name) //带参数的构造函数
{
m_nAge=age;
m_fsalary = salary;
m_pstrName = new char(20);//用new作为字符指针m_pstrName分配空间
strcpy(m_pstrName, name);
}
//复制构造函数,用已存在的对象来创建新的对象
CPeople::CPeople(const CPeople &AnotherPeople) 
{
m_nAge = AnotherPeople.m_nAge;
m_fSalary = AnotherPeople.m_fSalary;
m_pstrName = new char[strlen(AnotherPeople.m_pstrName)+1];
strcpy(m_pstrName, AnotherPeople.m_pstrName);
}
CPeople:-CPeople() //析构函数,用来释放我们在构造函数中动态申请的内存空间
{
if (m_pstrName != NULL)
    delete m_pstrName;//释放m_pstrName所用的内存空间
char *CPeople:GetName()
{
    return m_pstrName;
}
int CPeople::GetAge()
{
    return m_nAge;
}
void CPeople::SetAge(int age)
{
    if(age <=0)
        cout<<"设置的年龄不合法"<endl;
    else
        m_nAge = age;
}
float CPeople::GetSalary()
{
    return m_fSalary;
}
void CPeople::SetSalary(float num)
{
    if(num < 0)
        cout<"设置的薪水数目不法"<<endl;
    else
        m_fSalary = num;
}
void main()
{
    CPeople ZhangSan(65,2000.00f,"张  三");//创建对象 ZhangSan
    cout<<"以下为个人信息:\n姓名,年龄,薪水"<<endl;
    cout<<"--------------------n";
    cout< Zhangsan.GetName()<<" ";//输出 ZhangSan的姓名
    cout<< ZhangSan.GetAge()<<" ";//输出ZhangSan的年龄
    cout<< ZhangSan.GetSalary()<<endl<<end1;//输出工资信息
    CPeople A;                      //创建一个对象A
    A.SetAge(34);                   //设置对象A的年龄
    A.SetSalary(4000.00f);          //设置对象A的工资
    cout<<A.GetName()<<" ";          //输出对象A的姓名
    cout<<A.GetAge()<<" ";                 //输对象a的年龄信息
    cout<<A.GetSalary()<<endl<<endl;/输出对象A工资信息
    CPeople B(ZhangSan);           //用对 ZhangSan象来创建对象B
    cout<<B.GetName()<<" ";
    cout<<B.GetAge()<<" ";
    cout<B.GetSalary()<<endl<endl;
}
```

三、实验要求

按要求编写实验程序,将实验程序调试运行,写出程序的运行结果,并提交实验报告,写出调试运行的分析和体会。

    实验三继承与派生
一、实验目的和要求
- 掌握派生类的定义方法和派生类构造函数的定义方法。
- 掌握不同继承方式的情况下,基类成员在派生类中的访问权限。
- 了解派生类的构造函数和析构函数的执行顺序。了解多重继承的定义方法,多重继承的构造函数和析构函数的使用。

二、实验内容

在类 CPeople的基础上,派生出学生类 CStudent,并实现对学生成绩的统计和输出。
源程序代码:
```cpp
#include<iostream>
#include <string>
#define MAXNUM 10
using namespace std;

class CPeople
{
protected:
    int m_nAge;
public:
    char *m_pstrName;

    CPeople(int age,char *name);
    -CPeople();
    int GetAge();
    void SetAge(int age);
    void CopyPeople (CPeople *pAnother);
};
CPeople::CPeople(int age,char *name)
{
    m_nAge=age;
    m_pstrName = new char[20];
    strcpy(m_pstrName, name);
}

CPeople::~CPeople()
{
    if(m_pstrName!=NULL)
        delete []m_pstrName;
}
int CPeople::GetAge()
{
    return m_nAge;
}

void CPeople::SetAge(int age)
{
    m_nAge=age;
}
void CPeople::CopyPeople (CPeople *pAnother)
{
    m_nAge = pAnother - m_nAge;
    strcpy(m_pstrName, pAnother -> m_pstrName);
}
class CStudent: public CPeople
{
    float m_ArrayScore[MAXNUM];  //用来存放成绩的数组
protected:
    int m_stuNo; //学号
    int m_courseNum;//课程数目
    float m_aScore; //平均成绩
public:
    CStudent(int age, int No, int Num, char* pName ="no name"):CPeople(age, pName)
    {
        m_stuNo=No;
        m_courseNum =Num;
        m_aScore =0.0f;
        //初始化成绩数组
        cout<<"请输入学生"<<m_pstrName<<m_courseNum<<"门课的成绩:"<<endl;
        for (int i= 0; i< m_courseNum; ++i)
            cin > m_ArrayScore[i];
    }
    void CaculateAverageScore()
    {
        float SUM =0.0f:
        for(int i= 0; i< m_courseNum; ++i)
        {
            sum += ArrayScore[i];
        }
        m_aScore=SUM/m_courseNum;
    }
    float Getm_aScore(){ return m_aScore;}
    friend ostream &operator<<(ostream &out, const CStudent &s);
}
ostream &operator<<(ostream &out, const CStudent &s)
{
    out<"学生姓名:"<<s.m_pstrName<<",学号:"<s.m_ stuNo<<",成绩列表:"<<endl;
    for(int i=0;i<s.m_courseNum; ++i)
    out << s.m ArrayScore[i] < endl;
    }
    out<<"平均成绩="<s.m_aScore<<endl<<endl;
    return out;
}
void main()
{
    CStudent stu1(16,29,3,"张三");
    stul.CaculateAverageScore();
    cout < stul;
}
```

三、实验要求

按要求编写实验程序,将实验程序调试运行,写出程序的运行结果,并提交实验报告,写出调试运行的分析和体会

    实验四模板的使用
一、实验目的与要求

了解函数模板、类模板的概念,练习编制函数模板和类模板。

二、实验内容

编写一个使用类模板对数组进行排序、查找和求元素和的程序。要求:设计一个
类模板 template<class T>class Array,用于对T类型的数组进行排序、查找和求元素
和,然后由此产生模板类 Array<int>和Array<double>
源程序如下:
```cpp
#include<iostream>
#include<iomanip>
using namespace std:
template <class T>
class Array
(
*set;
int n;
public:
Array ( *data, int i)
~Array()()
void sort()排序
int seek(key)查找指定的元素
T SUM()
11求和
void disp();显示所有的元素
template<class T>
void Array<T>: sort()
(
int i,j;
T temp;
for(i=1;i<n;i++)
#P23
#p24
```

三、实验要求
按要求编写实验程序,将实验程序调试运行,写出程序的运行结果,并提交实验
报告,写出调试运行的分析和体会。
实验五使用向量
一、实验目的和要求
练习使用向量解决实际问题
二、实验内容
利用向量编写程序:出圈游戏。假设有人数为n的一个小组,他们顺时针方向围
坐一圈。一开始任选选一个正整数作为报数上限值m从第一个人开始按顺时针方向
自1开始顺序报数,报到m时停止报数。报数m的人出列,然后从他原来所在地以顺
时针方向的下一个人开始,重新从1报数,报到m时停止报数并出列。如此下去,直
至所有人全部出列为止。要求按他们出列的顺序输出他们的名字。
源程序代码如下:
#include <iostream>
#include <vector>
using namespace std;
class SeqList
char name[10];
#p25
#p26
#p27
三、实验要求
按要求编写实验程序,将实验程序调试运行假设参加游戏的为5人,间隔数选
10,从第三个人的位置开始报数,5个人的名字依次为:李红、王强、张三、李四、王
五,写出程序的运行结果,并提交实验报告,写出调试运行的分析和体会
实验六多态性和虚函数
一、实验目的
熟悉继承和包含以及虚函数的多态性。
二、实验内容
程序实现的基本功能:小型公司人员信息管理。
某小型公司主要有3类人员:经理、兼职技术人员、兼职销售员。这些人员分
别具有
以下属性。
经理:姓名、编号、固定工资、当月薪水、计算月薪、显示信息
兼职技术人员:姓名、编号、工作小时、每小时工资额、当月薪水、计算月薪、
显示信息;
兼职销售员:姓名、编号、销售额、销售额提成、当月薪水、计算月薪、显示信
息;
要求:
人员编号基数为1000,每输入一个人员信息编号顺序加1:月薪计算办法是经理
固定月薪8000元;兼职技术人员按100元/小时领取月薪:兼职推销员按当月销售
额的4%提成。根据题目要求,设计一个基类employee,然后派生出technician(兼职
技术人员)类、 manager(经理)类和 sal esman(兼职销售员)类。
/employee.h头文件
class employee
(/定义职员类
protected:
char*name;//定义姓名
int EmpNo;//个人编号
double SUMPay;11月薪总额
static int employeeNo;本公司职员编号目前最大值
public:
employee()
~employee(
^……
#p37
