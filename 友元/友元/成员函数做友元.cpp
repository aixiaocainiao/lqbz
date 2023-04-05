#include <iostream>
#include <string>
using namespace std;
class Budiling;
class Goodgay
{
public:
    Goodgay();
    void visit();
    void visit1();
public:
    Budiling* budiling;//回头看

};
class Budiling
{
public:
    friend void Goodgay::visit();
public:
    Budiling();
public:
    string m_sittingroom;

private:
    string m_bedroom;
};
Goodgay::Goodgay()
{
    budiling = new Budiling;//回头看
}
Budiling::Budiling()
{
    m_sittingroom = "客厅";
    m_bedroom = "卧室";
}
void Goodgay::visit()
{
    cout << "好基友成员函数访问形式 正在访问:" << budiling->m_sittingroom << endl;
    cout << "好基友成员函数访问形式 正在访问:" << budiling->m_bedroom << endl;
}
void Goodgay::visit1()
{
    cout << "好基友成员函数访问形式 正在访问:" << budiling->m_sittingroom << endl;
    //cout << "好基友成员函数访问形式 正在访问:" << budiling->m_bedroom << endl;
}
void test()
{
    Goodgay pp;
    pp.visit();
    pp.visit1();
 
}
int main()
{

    test();
    system("pause");
    return 0;
}