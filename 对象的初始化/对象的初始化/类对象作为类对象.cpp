#include <iostream>
#include <string>
using namespace std;
class Phone
{
public:
    Phone(string name1) 
    {
        cout << "Phone ���캯���ĵ���" << endl;
        PName = name1;
    }
    ~Phone()
    {
        cout << "Phone ���������ĵ���" << endl;
    }



    string PName;

};



class Person
{
public:
    Person(string name, string name1) :m_name(name), m_Pname(name1)
    //�൱�� Phone m_Pname = name1;����Phone m_Pname(name1);��ʽ��
    {
        cout << "Person ���캯���ĵ���" << endl;
    }

    ~Person()
    {
        cout << "Person ���������ĵ���" << endl;
    }





public:
    //�ֻ����˵�����
    string m_name;
    //�ֻ�����������
    Phone m_Pname;





};
void test()
{
    Person p("��С��", "ƻ��12");
    cout << "����Ϊ: " << p.m_name << "  �ֻ�Ʒ��Ϊ:  " << p.m_Pname.PName << endl;

}
int main()
{
    /*Person p("����", "ƻ��12");
    cout << "����Ϊ: " << p.m_name << " �ֻ�Ʒ��Ϊ: " << p.m_Pname.PName << endl;*/
    test();

    system("pause");
    return 0;
}