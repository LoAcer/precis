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
