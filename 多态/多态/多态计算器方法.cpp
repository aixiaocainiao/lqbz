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
//�ӷ�������
class AddCalculator :public Abstractculator
{
public:
    int getResult()
    {
        return m_num1 + m_num2;

    }


};
//����������
class Subcalculator :public Abstractculator
{
public:
    int getResult()
    {
        return m_num1 - m_num2;
    }


};
//�˷�������
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
    //�����ӷ�������
    Abstractculator* abc = new AddCalculator;
    abc->m_num1 = 10;
    abc->m_num2 = 10;
    cout << abc->m_num1 << " + " << abc->m_num2 << " = " << abc->getResult() << endl;
    delete abc;//�����˼ǵ�����

    //��������������
    abc = new Subcalculator;
    abc->m_num1 = 10;
    abc->m_num2 = 10;
    cout << abc->m_num1 << " - " << abc->m_num2 << " = " << abc->getResult() << endl;
    delete abc;
    //�����˷�������
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
// C++�����ᳫ���ö�̬��Ƴ���ṹ����Ϊ��̬�ŵ�ܶ�
