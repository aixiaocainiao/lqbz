#include <iostream>
#include <string>
using namespace std;
class Animal//����
{
    
public:
    int m_age;

};
//�̳�ǰ��virtual�ؼ��ֺ󣬱�Ϊ��̳�
//��ʱ�����ĸ���Animal��Ϊ�����

class sheep :virtual public Animal {};
class tuo :virtual public Animal{};
class sheeptuo:public sheep,public tuo{};




//class sheep:public Animal{};
//class tuo :public Animal{};
//class sheeptuo:public sheep,public tuo{};  �ᵼ�����Ͳ���ȷ
void test()
{
    sheeptuo s1;
    
    s1.sheep::m_age = 18;
    s1.tuo::m_age = 28;//˳��ṹ 
    //�����μ̳У���������ӵ����ͬ���ݣ���Ҫ������������
    //s1.m_age;//s1.m_age;//���Ͳ���ȷ
    cout << "s1.sheep::m_age =" << s1.sheep::m_age << endl;
    cout << "s1.tuo::m_age =" << s1.tuo::m_age << endl;
    cout << "s1.m_age =" << s1.m_age << endl;
    //�����������֪�� ֻ��һ�ݾͿ��ԣ����μ̳е������������� ��Դ�˷�
}
int main()
{

    test();
    system("pause");
    return 0;
}
//���μ̳д�������Ҫ�������Ӽ̳�������ͬ�����ݣ�������Դ�˷��Լ���������
//������̳п��Խ�����μ̳�����
