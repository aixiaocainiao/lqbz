#include <iostream>
#include <string>
using namespace std;
class Building;//先告诉编译器  下面定义不要出错
class GoodGay
{
public:

    GoodGay();
    void visit();//参观函数 访问Building 中的属性
    Building * building;//building是指针 building = new Building //*building 解引用
    //int* p;一样的吧Building 类的指针


};
class Building
{
    friend class GoodGay;
public:
    Building();

   /* Building()
    {
        m_sittingroom = "客厅";
        m_bedroom = "卧室";
    }
*/

public:
    string m_sittingroom;//客厅

private:

    string m_bedroom;//卧室


};
//类外写成员函数
Building::Building()//作用域
{
    m_sittingroom = "客厅";
    m_bedroom = "卧室";
}
//类外写成员函数
GoodGay::GoodGay()
{
    //没听懂
    building = new Building;//
    

}
void GoodGay::visit()
{

    cout << "好基友正在类访问  访问卧室:" << building->m_sittingroom << endl;

    cout << "好基友正在类访问  访问卧室:" << building->m_bedroom << endl;//friend class GoodGay
}
void test()
{
    GoodGay PP;
    PP.visit();
}
int main()
{
    test();

    system("pause");
    return 0;
}