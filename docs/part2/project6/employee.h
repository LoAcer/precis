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
