//#include <iostream>
//#include <string>
//using namespace std;
//class Person
//{
//public:
//    Person()
//    {
//        cout << "Ĭ�Ϲ��캯���ĵ���" << endl;
//    }
//    Person(int age,int hight)
//    {
//        
//        cout << "�вι��캯���ĵ���" << endl;
//        m_age = age;
//        m_hight = new int(hight);
//    }
//    Person(const Person& p)
//    {
//        m_age = p.m_age;
//        m_hight = new int (*p.m_hight);// �úÿ�
//        cout << "�������캯���ĵ���" << endl;
//    }
//    ~Person()
//    {
//        cout << "���������ĵ���" << endl;
//        if (m_hight != NULL)
//        {
//            delete m_hight;
//
//        }
//    }
//public:
//    int m_age;
//    int *m_hight;//new ��ʹ�� ����  ������   �Լ��ٿ�һ��
//
//};
//void test01()
//{
//    Person p(10,160);
//    Person p1(p);
//    cout << "p������: " << p.m_age << endl;
//    cout << "p1������: " << p1.m_age << endl;
//    cout << "p������: " << *p.m_hight << endl;
//    cout << "p1������: " << *p1.m_hight << endl;
//
//}
//int main()
//{
//    test01();
//
//    system("pause");
//    return 0;
//}
////����������ڶ������ٵģ�һ��Ҫ�Լ��ṩ�������캯������ֹǳ��������������