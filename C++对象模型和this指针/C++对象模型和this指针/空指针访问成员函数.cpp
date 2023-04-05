#include <iostream>
#include <string>
using namespace std;
class Person
{
public:
    void fun()
    {
        cout << "this is a Person " << endl;
    }
    void fun1()
    {
        if (this == NULL)
        {
            return;
        }
        cout << "m_age = " << m_age << endl;
        cout << "m_age = " << this->m_age << endl;//this->m_age这是默认的
    }

public:
    int m_age;

};

void test()
{
    Person* p = NULL;//空指针
    p->fun();//空指针，可以调用成员函数
    p->fun1();//但是如果成员函数中使用了this指针，就不可以了

}
int main()
{

    test();


    system("pause");
    return 0;
}