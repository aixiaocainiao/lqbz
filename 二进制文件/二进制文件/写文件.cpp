//�����Ʒ�ʽд�ļ���Ҫ������������ó�Ա����write
//����ԭ�ͣ�ostream& write((const char *)buffer,int len)
//buffer ������ ���׵�ַ �������������һ��Ԫ�ص��׵�ַ
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
class Person
{
public:
    char name[64];//����string c++������ʽ �ײ�����c����д��  ���������
    int m_age;

};
//�������ļ�  д�ļ�
int main()
{
    //1������ͷ�ļ�

    //2������������
    ofstream ofs;
    //3�����ļ�
    ofs.open("Person.txt", ios::out | ios::binary);
    //4��д�ļ�
         //��׼�ṹ
    Person p = { "����",18 };//�൱�ڽṹ����÷�
    ofs.write((const char*)&p, sizeof(Person));
         //��׼�ṹ
    //5���ر��ļ�
    ofs.close();
    system("pause");
    return 0;
}
//�ļ���������� ����ͨ��write����  �Զ����Ʒ�ʽд����