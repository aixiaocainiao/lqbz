//#include <iostream>
//#include <string>
//using namespace std;
//
//
////2��ֵ���ݵķ�ʽ������������ֵ
//
////3��ֵ�÷�ʽ���ؾֲ�����
//
//
//class Person
//{
//public:
//    Person()
//    {
//        cout << "Person Ĭ�Ϲ��캯���ĵ���: " << endl;
//
//
//    }
//    Person(int a)
//    {
//        m_age = a;
//
//        cout << "Person �вι��캯���ĵ���: " << endl;
//
//
//    }
//    Person(const Person& p)
//    {
//
//        cout << "Person �������캯���ĵ���: " << endl;
//        m_age = p.m_age;
//    }
//    ~Person()
//    {
//        cout << "���������ĵ���: " << endl;
//    }
//public:
//    int m_age;
//
//};
////1��ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
//
//void test01()
//{
//    Person p1(20);
//    Person p2(p1);
//    cout << "m_age ��ֵΪ��" << p1.m_age << endl;
//    cout << "p2.m_age ��ֵΪ��" << p2.m_age << endl;
//     
//}
//void dowork(Person p)
//{
//    Person p3;
//    p3.m_age = p.m_age;
//    cout << "p3.m_age��ֵ: " << p3.m_age << endl;
//    
//}
//void test02()
//{
//    Person p(10);
//    dowork(p);
//
//}
//Person dowork02()
//{
//    Person p1;
//    return p1;
//
//}
//void test03()
//{
//    Person p = dowork02();//�൱��Person p(dowork());
//}
//int main()
//{
//
//   // test01();
//    //test02();
//    test03();
//    system("pause");
//    return 0;
//}