#include <iostream>
#include <fstream>
using namespace std;
class Person
{
public:
    char name[64];
    int m_age;

};
int main()
{

    //1������ͷ�ļ�

    //2������������
    ifstream ifs;
    //3�����ļ� �ж��ļ��Ƿ�򿪳ɹ�
    ifs.open("Person.txt", ios::in | ios::binary);

    if (!ifs.is_open())
    {
        cout << "���ļ�ʧ��" << endl;
       
    }
    //4�����ļ��ļ�
       //��׼�ṹ
    Person p;
    ifs.read((char*)&p, sizeof(Person));//�������һ����
       //��׼�ṹ
    //ifs.read((char*)&p, sizeof(p));
    cout << "����Ϊ:" << p.name << " �Ա�Ϊ " << p.m_age << endl;
    
    system("pause");
    return 0;
}