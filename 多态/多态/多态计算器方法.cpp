#include <iostream>
#include <string>
using namespace std;
class Abstractculator
{
public:
    virtual int getResult()
    {
        return 0;

    }
    int m_num1;
    int m_num2;

};
//加法计算器
class AddCalculator :public Abstractculator
{
public:
    int getResult()
    {
        return m_num1 + m_num2;

    }


};
//减法计算器
class Subcalculator :public Abstractculator
{
public:
    int getResult()
    {
        return m_num1 - m_num2;
    }


};
//乘法计算器
class Mucalculator :public Abstractculator
{
public:
    int getResult()
    {
        return m_num1 * m_num2;
    }

};
void test()
{
    //创建加法计算器
    Abstractculator* abc = new AddCalculator;
    abc->m_num1 = 10;
    abc->m_num2 = 10;
    cout << abc->m_num1 << " + " << abc->m_num2 << " = " << abc->getResult() << endl;
    delete abc;//用完了记得销毁

    //创建减法计算器
    abc = new Subcalculator;
    abc->m_num1 = 10;
    abc->m_num2 = 10;
    cout << abc->m_num1 << " - " << abc->m_num2 << " = " << abc->getResult() << endl;
    delete abc;
    //创建乘法计算器
    abc = new Mucalculator;
    abc->m_num1 = 10;
    abc->m_num2 = 10;
    cout << abc->m_num1 << " * " << abc->m_num2 << " = " << abc->getResult() << endl;
    delete abc;
}
int main()
{
    
    test();
    system("pause");
    return 0;
}
// C++开发提倡利用多态设计程序结构，因为多态优点很多
