//#include <iostream>
//#include <string>
//using namespace std;
//class Person
//{
//public:
//    static int m_A;//类内声明
//
//
//    //静态成员变量特点
//    //1、在编译阶段分配内存
//                //2、类内声明、类外初始化   //很重要
//    //3、所有对象共享同一份数据
//
//
//private://类内可以访问  类外不可以访问  权限问题
//    static int m_b;//类内声明
//
//};
//int Person::m_A = 100;//类外初始化
//int m_b = 200;//类外初始化
//void test()
//{
//    //静态成员变量访问两种方式
//    //1、通过对象
//    Person p;
//    cout << p.m_A << endl;
//    //2、通过类名
//    cout << Person::m_A << endl;
//
//       /*cout << Person::m_b << endl;//不可以访问  有访问权限*/
//
//    /*Person p;
//    Person p2;
//
//    cout << "m_A = " << p.m_A << endl;
//    cout << "m_A = " << p2.m_A << endl;
//    Person p1;
//    p1.m_A = 200;
//    cout << "m_A = " << p.m_A << endl;
//    cout << "m_A = " << p1.m_A << endl;*/
//}
//int main()
//{
//    test();
//
//
//    system("pause");
//    return 0;
//}