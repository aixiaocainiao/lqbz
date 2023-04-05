#include <iostream>
#include <string>
using namespace std;
class Person
{
public:
    Person& operator+(Person& p)
    {
        Person temp;
        temp.m_a = this->m_a + p.m_a;
        temp.m_b = this->m_b + p.m_b;
        return temp;

    }




public:
    int m_a;
    int m_b;


};
void test()
{
    Person p;
    p.m_a = 10;
    p.m_b = 20;
    Person p1;
    p1.m_a = 15;
    p1.m_b = 16;

}
int main()
{


    system("pause");
    return 0;
}
