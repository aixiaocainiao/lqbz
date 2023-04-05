#include <iostream>
#include <string>
using namespace std;
class Animal//共享
{
    
public:
    int m_age;

};
//继承前加virtual关键字后，变为虚继承
//此时公共的父类Animal称为虚基类

class sheep :virtual public Animal {};
class tuo :virtual public Animal{};
class sheeptuo:public sheep,public tuo{};




//class sheep:public Animal{};
//class tuo :public Animal{};
//class sheeptuo:public sheep,public tuo{};  会导致类型不明确
void test()
{
    sheeptuo s1;
    
    s1.sheep::m_age = 18;
    s1.tuo::m_age = 28;//顺序结构 
    //当菱形继承，两个父类拥有相同数据，需要加作用域区分
    //s1.m_age;//s1.m_age;//类型不明确
    cout << "s1.sheep::m_age =" << s1.sheep::m_age << endl;
    cout << "s1.tuo::m_age =" << s1.tuo::m_age << endl;
    cout << "s1.m_age =" << s1.m_age << endl;
    //这份数据我们知道 只有一份就可以，菱形继承导致数据由两份 资源浪费
}
int main()
{

    test();
    system("pause");
    return 0;
}
//菱形继承带来的主要问题是子继承两份相同的数据，导致资源浪费以及毫无意义
//利用虚继承可以解决菱形继承问题
