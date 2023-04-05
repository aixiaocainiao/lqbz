//#include <iostream>
//#include <string>
//using namespace std;
////默认构造函数（无参，函数体为空）
////默认析构函数（无参，函数体为空）
//// 默认拷贝构造函数，对属性进行值拷贝
////构造函数调用规则
//
//// 如果用户定义有参构造函数   C++不在提供默认无参构造函数，但是会提供默认拷贝函数
////如果用户定义拷贝构造函数，C++不会提供其他构造函数
//
//class Person
//{
//public:
//    Person()
//    {
//        cout << "默认构造函数的调用" << endl;
//    }
//    Person(int age)
//    {
//        m_age = age;
//        cout << "有参构造函数的调用" << endl;
//    }
//    Person(const Person& p)
//    {
//        m_age = p.m_age;
//        cout << "拷贝构造函数的调用" << endl;
//    }
//    ~Person()
//    {
//        cout << "析构函数的调用" << endl;
//    }
//public:
//    int m_age;
//};
//void test01()
//{
//    Person p(10);
//    Person p1(p);
//
//
//}
//void test02()
//{
//   /* Person p;
//    Person p1(p);*/
//
//}
//
//
//int main()
//{
//    test01();
//    test02();
//    system("pause");
//    return 0;
//}