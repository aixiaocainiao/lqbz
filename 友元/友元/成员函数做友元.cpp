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
    Budiling* budiling;//��ͷ��

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
    budiling = new Budiling;//��ͷ��
}
Budiling::Budiling()
{
    m_sittingroom = "����";
    m_bedroom = "����";
}
void Goodgay::visit()
{
    cout << "�û��ѳ�Ա����������ʽ ���ڷ���:" << budiling->m_sittingroom << endl;
    cout << "�û��ѳ�Ա����������ʽ ���ڷ���:" << budiling->m_bedroom << endl;
}
void Goodgay::visit1()
{
    cout << "�û��ѳ�Ա����������ʽ ���ڷ���:" << budiling->m_sittingroom << endl;
    //cout << "�û��ѳ�Ա����������ʽ ���ڷ���:" << budiling->m_bedroom << endl;
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