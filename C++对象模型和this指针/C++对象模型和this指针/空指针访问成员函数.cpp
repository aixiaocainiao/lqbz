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
        cout << "m_age = " << this->m_age << endl;//this->m_age����Ĭ�ϵ�
    }

public:
    int m_age;

};

void test()
{
    Person* p = NULL;//��ָ��
    p->fun();//��ָ�룬���Ե��ó�Ա����
    p->fun1();//���������Ա������ʹ����thisָ�룬�Ͳ�������

}
int main()
{

    test();


    system("pause");
    return 0;
}