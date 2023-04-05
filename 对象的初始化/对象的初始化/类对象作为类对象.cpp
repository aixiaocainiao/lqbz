#include <iostream>
#include <string>
using namespace std;
class Phone
{
public:
    Phone(string name1) 
    {
        cout << "Phone 构造函数的调用" << endl;
        PName = name1;
    }
    ~Phone()
    {
        cout << "Phone 析构函数的调用" << endl;
    }



    string PName;

};



class Person
{
public:
    Person(string name, string name1) :m_name(name), m_Pname(name1)
    //相当于 Phone m_Pname = name1;或者Phone m_Pname(name1);隐式法
    {
        cout << "Person 构造函数的调用" << endl;
    }

    ~Person()
    {
        cout << "Person 析构函数的调用" << endl;
    }





public:
    //手机主人的姓名
    string m_name;
    //手机的牌子名称
    Phone m_Pname;





};
void test()
{
    Person p("宋小胖", "苹果12");
    cout << "姓名为: " << p.m_name << "  手机品牌为:  " << p.m_Pname.PName << endl;

}
int main()
{
    /*Person p("张三", "苹果12");
    cout << "姓名为: " << p.m_name << " 手机品牌为: " << p.m_Pname.PName << endl;*/
    test();

    system("pause");
    return 0;
}