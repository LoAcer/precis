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

> 《C++语言程序设计》是一门实践性很强的课程,必须通过反复上机练习,深入领
悟面向对象程序设计的基本思想。通过实验教学加深理解和巩固课堂和教材所学的内
容,提高实践动手能力。

##### <center>实验一 Microsoft Visual+6.0集成开发环境的使用</center>

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
- 在【新建】对话框中打开【文件】选项卡,单击`C++ Source File`选项,建立源
文件;选中“添加工程”复选框;在右边的“文件”文本框中为文件指定一个名
字,如“hello”。
- 编辑源文件。在【工作区】窗口中单击 FileVIEW标签,选择并打开该窗口中
SourceFiles下的文件,如 hello.cpp,在打开的【文件】窗口中输入源程序。
- 在项目文件中增加文件。若在已有的项目文件中增加一个新文件,如c++源文件
“\*.cpp”或头文件“*.h”需要执行以下操作。打开应的项目文件,选择【新建】|【文件】命令,选择c++编辑栏Source选项可增加C++源文件;或选择C/C++
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
```cpp
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
int TDate::isLeapYear()
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

##### <center>实验二 类和对象的使用</center>
一、实验目的和要求

(1)熟悉类的定义格式和类中成员的访问权限。

(2)掌握对象的定义方法以及对象的初始化和赋值的操作。

(3)掌构造函数和析构函数的使用。

二、实验内容

1、编写个程序,定义类 CPeople包个人信息姓名、年龄、薪水。并在类中定义构造函数、析构函数。题目分析:注意构造函数、析构函数的定义规则。

源程序代码:
```cpp
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
    ~CPeople();                                 //析构函数
    char *GetName();
    float GetSalary();
    void SetSalary(float);
    int GetAge();
    void SetAge (int age);
};

CPeople::CPeople() //缺省构造函数,给创建的对象的每个成员赋默认值
{
    m_nAge = 20;
    m_fSalary=3000.00f;
    m_pstrName = new char[20];//用new操作符为字符指针m_pstrName分配空间
    strcpy(m_pstrName,"无名氏");
}

 CPeople::CPeople(int age, float salaty, char *name) //带参数的构造函数
{
  m_nAge=age;
  m_fSalary = salary;
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
CPeople::~CPeople() //析构函数,用来释放我们在构造函数中动态申请的内存空间
{
  if (m_pstrName != NULL)
      delete m_pstrName;//释放m_pstrName所用的内存空间
}
char *CPeople::GetName()
{
    return m_pstrName;
}
int CPeople::GetAge()
{
    return m_nAge;
}
void CPeople::SetAge(int age)
{
    if(age <= 0)
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
    cout<< ZhangSan.GetSalary()<<endl<<endl;//输出工资信息

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

#####    <center>实验三 继承与派生</center>
一、实验目的和要求
- 掌握派生类的定义方法和派生类构造函数的定义方法。
- 掌握不同继承方式的情况下,基类成员在派生类中的访问权限。
- 了解派生类的构造函数和析构函数的执行顺序。了解多重继承的定义方法,多重继承的构造函数和析构函数的使用。

二、实验内容

在类 CPeople的基础上,派生出学生类 CStudent,并实现对学生成绩的统计和输出。

源程序代码:
```cpp
#include <iostream>
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
CPeople::CPeople(int age, char *name)
{
    m_nAge = age;
    m_pstrName = new char[20];
    strcpy(m_pstrName, name);
}

CPeople::~CPeople()
{
    if (m_pstrName != NULL)
        delete []m_pstrName;
}

int CPeople::GetAge()
{
    return m_nAge;
}

void CPeople::SetAge(int age)
{
    m_nAge = age;
}

void CPeople::CopyPeople(CPeople *pAnother)
{
    m_nAge = pAnother -> m_nAge;
    strcpy(m_pstrName, pAnother -> m_pstrName);
}

class CStudent:public CPeople
{
    float m_ArrayScore[MAXNUM];  //用来存放成绩的数组
protected:
    int m_stuNo; //学号
    int m_courseNum;//课程数目
    float m_aScore; //平均成绩
public:
    CStudent(int age, int No, int Num, char* pName = "no name"):CPeople(age, pName)
    {
        m_stuNo = No;
        m_courseNum = Num;
        m_aScore = 0.0f;
        //初始化成绩数组
        cout << "请输入学生" << m_pstrName << m_courseNum << "门课的成绩:" <<endl;
        for (int i= 0; i < m_courseNum; ++i)
            cin >> m_ArrayScore[i];
    }

    void CaculateAverageScore()
    {
        float SUM = 0.0f:
        for(int i= 0; i < m_courseNum; ++i)
        {
            sum += m_ArrayScore[i];
        }
        m_aScore = SUM/m_courseNum;
    }

    float Getm_aScore(){ return m_aScore;}
    friend ostream &operator<<(ostream &out, const CStudent &s);
}

ostream &operator<<(ostream &out, const CStudent &s)
{
    out << "学生姓名: " << s.m_pstrName << ",学号:" << s.m_stuNo << ",成绩列表:" <<endl;
    for(int i = 0; i < s.m_courseNum; ++i)
    {
        out << s.m_ArrayScore[i] << endl;
    }
    out << "平均成绩=" << s.m_aScore << endl << endl;
    return out;
}
void main()
{
    CStudent stu1(16,29,3,"张三");
    stu1.CaculateAverageScore();
    cout << stu1;
}
```

三、实验要求

按要求编写实验程序,将实验程序调试运行,写出程序的运行结果,并提交实验报告,写出调试运行的分析和体会

#####    <center>实验四模板的使用</center>

一、实验目的与要求

了解函数模板、类模板的概念,练习编制函数模板和类模板。

二、实验内容

编写一个使用类模板对数组进行排序、查找和求元素和的程序。要求:设计一个类模板` template<class T> class Array,`用于对T类型的数组进行排序、查找和求元素和,然后由此产生模板类` Array<int>和Array<double>`

源程序如下:
```cpp
#include <iostream>
#include <iomanip>
using namespace std;
template <class T>
class Array
{
    T *set;
    int n;
public:
    Array (T *data, int i);
    {set= data; n=i;}
    ~Array(){};
    void sort(); //排序
    int seek(T key); //查找指定的元素
    T SUM(); //求和
    void disp();//显示所有的元素
};
template<class T>
void Array<T>::sort()
{
    int i,j;
    T temp;
    for(i=1;i<n;i++)
        for(j=n-1;j>=i;j--)
            if(set[j-1]>set[j])
            {
                temp = set[j-1];
                set[j-1] = set[j];
                set[j] = temp;
            }
}
template <Class T>
int Array<T>::seek(T key)
{
    int i;
    for(i=0;i<n;i++)
        if(set[i] == key) return i;
    return -1;
}

template<class T>
T Array<T>::SUM()
{
    T s=0;
    int i;
    for(i=0;i<n;i++)
        s+=set[i];
    return s;
}
template<class T>
void Array<T>::disp()
{
    int i;
    for(i=0;i<n;i++)
        cout<<set[i]<<" ";
    cout<<endl;
}

void main()
{
    int a[] = {6,3,8,1,9,4,7,5,2};
    double b[] {2.3,6.1,1.5,8.4,6.7,3.8};
    Array<int> arr1(a,9);
    Array<double> arr2(b, 6);
    cout<<" arr1:"<<endl;
    cout<<" 原序列:";
    arr1.disp();
    cout<<"8 在arr1中的位置:"<<arr1.seek(8)<<endl;
    arr1.sort();
    cout<<" 排序后:";
    arr1.disp();
    cout<<" arr2:"<<endl;
    cout<<" 原序列:"
    arr2.disp();
    cout<<" 8.4 在arr2中的位置:"<<arr2.seek(8.4)<<endl;
    arr2.sort();
    cout<<"排序后:";
    arr2.disp();
}
```

三、实验要求

按要求编写实验程序,将实验程序调试运行,写出程序的运行结果,并提交实验报告,写出调试运行的分析和体会。

#####    <center>实验五使用向量</center>
一、实验目的和要求

练习使用向量解决实际问题

二、实验内容

利用向量编写程序:`出圈游戏`。
假设有人数为n的一个小组,他们顺时针方向围坐一圈。一开始任选选一个正整数作为报数上限值m从第一个人开始按顺时针方向自1开始顺序报数,报到m时停止报数。报数m的人出列,然后从他原来所在地以顺时针方向的下一个人开始,重新从1报数,报到m时停止报数并出列。如此下去,直至所有人全部出列为止。要求按他们出列的顺序输出他们的名字。

源程序代码如下:
```cpp
#include <iostream>
#include <vector>
using namespace std;
class SeqList
{
    char name[10];
public:
    void DispName()
    {
        cout<<name;
    }
    void SetName(char b[])
    {
        strcpy(name, b);
    }
    void Joseph(vector<SeqList>&);
};
//Joseph 函数
void SeqList::Joseph(vector<SeqList>&c)
{
    int m,star,i,j,k;
    cout<<"请输入间隔数m(m<20)";
    cin>>m;
    while(m>20) {
        cout<<"间隔太大，请重新输入: ";
        cin>>m;
    }
    cout<<"从第几个人的位置开始报数(不能大于)"<<c.size()<<");";
    cin>>star;
    while (star > c.size()) {
        cout<<"开始位置大于人数，重新输入:";
        cin>>star;
    }
    cout<<"准备输入名字"<<endl;
    getchar();//清除回车干扰
    //输入参加游戏人的名字
    char s[10];
    for (i=0;i<c.size();i++)
    {
        cout<<"第"<<i+1<<"个人的名字:";
        gets(s);
        c[i].SetName(s);
    }
    i = star - 2;
    vector <SeqList>::iterator p;
    p = c.begin();
    int length = c.size();
    for(k=1;k<=length;k++){
        j=0;
        while(j<m)
        {
            i++;
            if (i==c.size()) //到终点，返回到第一个位置基数
                i = 0;
            j++;
        }
        if (k==length) {
            break;
        }
        c[i].DispName(); //输出 出圈人的信息
        cout<<",";
        c.erase(p+i);//删除出圈人的记录
        --i;         //调整计数位置初始值
    }
    //break 语句跳转至此处，输出最后出列的编号
    c[i].DispName();
    cout<<endl;
}
void main()
{
    int length = 0;
    cout<<"请输入人数:";
    cin>>length;
    vector <SeqList> c(length);
    SeqList game;
    game.Joseph(c);
}
```
三、实验要求

按要求编写实验程序,将实验程序调试运行假设参加游戏的为5人,间隔数选10,从第三个人的位置开始报数,5个人的名字依次为:李红、王强、张三、李四、王五,写出程序的运行结果,并提交实验报告,写出调试运行的分析和体会。

#####   <center>实验六多态性和虚函数</center>
一、实验目的

熟悉继承和包含以及虚函数的多态性。

二、实验内容

程序实现的基本功能:小型公司人员信息管理。
某小型公司主要有3类人员:经理、兼职技术人员、兼职销售员。这些人员分别具有
以下属性。
经理:姓名、编号、固定工资、当月薪水、计算月薪、显示信息;
兼职技术人员:姓名、编号、工作小时、每小时工资额、当月薪水、计算月薪、显示信息;
兼职销售员:姓名、编号、销售额、销售额提成、当月薪水、计算月薪、显示信息;
要求:
    人员编号基数为1000,每输入一个人员信息编号顺序加1:月薪计算办法是经理固定月薪8000元;兼职技术人员按100元/小时领取月薪:兼职推销员按当月销售额的4%提成。根据题目要求,设计一个基类employee,然后派生出technician(兼职技术人员)类、 manager(经理)类和 salesman(兼职销售员)类。
```cpp
/employee.h头文件
class employee
{//定义职员类
protected:
    char*name;//定义姓名
    int EmpNo;//个人编号
    double SUMPay;//月薪总额
    static int employeeNo;//本公司职员编号目前最大值
public:
    employee();
    ~employee();
    virtual void pay(){}=0;//计算月薪函数，//解决：虚函数
    void displayStatus();//显示人员信息
};
class technician:public employee
//兼职技术人员类（公有派生）
{
protected:
    float hourlyRate;//每小时酬金
    int workHours;//当月工作时数
public:
    technician();
    void pay();//计算月薪函数
    void displayStatus();//显示人员信息
};
class salesman:public employee //兼职推销员类
{
protected:
    double CommRate;//按销售额提取酬金百分比
    double sales;//当月销售额
public:
    salesman();
    void pay(); // 计算月薪函数
    void displayStatus();//显示人员信息
};
class manager:virtual public employee//经理类
{
protected:
    float monthlyPay;//固定月薪数
public:
    manager();
    void pay();//计算月薪函数
    void displayStatus();//显示人员信息
};
//*********************************************
//empfun.cpp
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
//sy10_4.cpp
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
```

三、实验要求
   按要求编写实验程序，将实验程序调试运行,写出程序的运行结果，并提交实验报告，写出调试运行的分析和体会。

##### <center>实验七 运算符重载、使用多文件编程</center>
一、实验目的

    熟悉运算符重载的定义和使用方法,熟悉多文件编程规范。

二、实验内容

重载类CPeople的输出运算符和赋值运算符。
```cpp
//****************************************
//程序清单 CPeople.h
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
//******************************************
// 程序清单 CPeople.cpp
//******************************************
//类CPeople的实现
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
//**************************************
// 程序清单test7.cpp
//**************************************
//测试 CPeople类
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

```

三、实验要求
   按要求编写实验程序，将实验程序调试运行,写出程序的运行结果，并提交实验报告，写出调试运行的分析和体会。

##### <center>实验八 文件读写</center>
一、实验目的

熟悉使用文件的基本方法。熟悉标准流对象cin和cout的使用方法，掌握系统提供的输入操作和输出操作函数。

二、实验内容

简单通讯录:编写一个简单的通讯录程序,在文件myNote中记录朋友的姓名、年龄和电话号码，允许用户向其中添加信息，根据姓名查询或显示所有的信息。
```cpp
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;

class MyFriend
{
private:
    unsigned int age;
    string name;
    string telephoneNo;
public:
    void getdata()
    {
        cin>>name>>age>>telephoneNo;
    }
    void disp()
    {
        cout<<left<<setw(12)<<name<<setw(8)<<age<<setw(12)<<telephoneNo<<endl;
    }
    string getname()
    {
        return name;
    }
};
void outData()
{
    ifstream ifile("myNote.txt");
    MyFriend myFriend;
    string name,no;
    int age;
    cout<<"输入数据："<<endl;
    count<<left<<setw(12)<<"姓名"<<setw(8)<<"年龄"<<setw(12)<<"电话"<<endl;
    while(1) {
        ifile>>name>>age>>no;
        myFriend.setName(name);
        myFriend.setAge(age);
        myFriend.setNo(no);
        if (ifile.eof()) {
            ifile.close();
            return;
        }
        myFriend.disp();
    }
}
void searchByName()
{
    MyFriend myFriend;
    string sname,name,no;
    int age;
    bool ifFind = false;
    ifstream ifile("myNote.txt");
//    file.seekg(0)
    cout<<"输入要查询的姓名：";
    cin>>sname;
    cout<<left<<setw(12)<<"姓名"<<setw(8)<<"年龄"<<setw(12)<<"电话"<<endl;
    while(1){
        ifile>>name>>age>>no;
        myFriend.setName(name);
        myFriend.setAge(age);
        myFriend.setNo(no);
        if (name == sname) {
            ifFind =true;
            myFriend.disp();
        }
        if (ifile.eof()) {
            if(!ifFind)
                cout<<"对不起，没有找到！"<<endl;
            ifile.close();
            return;
        }
    }
}
void addData()
{
    ofstream ofile("myNote.txt",ios::app);
    MyFriend myFriend;
    cout<<"添加数据(姓名 年龄 电话):";
    myFriend.getdata();
    ofile<< myFriend.getname()<<""<<myFriend.getage()<<""<<myFriend.getTelephoneNo()<<"";
    ofile.close();
}
void main()
{
    int select;
    do {
        cout<<"选择(1:输出数据 2:按姓名查询 3:添加数据 其它数字:退出):";
        cin >> select;
        switch(select)
        {
            case 1:outData();break;
            case 2:searchByName();break;
            case 3:addData();break;
            default: break;
        }
    }while(select==1||select==2||select==3||select==4);
}

```

三、实验要求
   按要求编写实验程序，将实验程序调试运行,写出程序的运行结果，并提交实验报告，写出调试运行的分析和体会。


