//#include <iostream>
//#include <string>
//using namespace std;
//class Person
//{
//public:
//    Person(int age)
//    {
//        //thisָ��ָ�� �����õĳ�Ա����  �����Ķ���
//       this->age = age;
//
//    }
//   Person& PersonAddage(const Person &p)//�����  Person  ����ֵ�� 
//    {
//        this->age += p.age;
//        //this ָ��p2��ָ�� ����*thisָ��ľ���p2���������
//        return *this;
//    }
//   Person PersonAddage1(const Person& p)//�����  Person  ����ֵ�� 
//   {
//       this->age += p.age;
//       return *this;//���￴һ��ֵ����   ������ ��������    108��
//   }
//
//public:
//    int age;
//
//
//};
//void test()
//{
//    Person p(10);
//    Person p1(10);
//    cout << "p.age = " << p.age << endl;
//    cout << "p1.age = " << p1.age << endl;
//
//
//}
//void test1()
//{
//    Person p(10);
//    Person p1(10);
//    //��p��ֵ�ӵ�p1��
//    p1.PersonAddage(p);
//    cout << "p1.age = " << p1.age << endl;
//    p1.PersonAddage(p).PersonAddage(p).PersonAddage(p);
//    cout << "p1.age = " << p1.age << endl;
//    p1.PersonAddage1(p).PersonAddage1(p).PersonAddage1(p);
//    cout << "p1.age = " << p1.age << endl;
//}
//int main()
//{
//    // test();
//    test1();
//
//    system("pause");
//    return 0;
//}