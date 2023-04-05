//#include <iostream>
//#include <string>
//using namespace std;
//class Person
//{
//public:
//    //静态成员函数特点
//    //程序共享一个函数
//    // 静态成员函数只能访问静态成员变量
//    static void func()
//    {
//        m_a = 20;
//       // m_b = 30;//错误  静态成员函数只能访问静态成员变量
//        cout << "static void func()的调用: " << endl;
//    }
//
//public:
//    static int m_a;//静态变量类内声明
//    int m_b = 0;
//
//private:
//    static void func1()
//    {
//        //m_a = 20;
//        // m_b = 30;//错误  静态成员函数只能访问静态成员变量
//        cout << "static void func1()的调用: " << endl;
//    }
//
//};
//int Person::m_a = 0;
//void test1()
//{
//    //静态成员函数两种访问方式
//    //1、对象访问
//    Person p;
//    p.func();
//
//
//    //2、类访问
//    Person::func();
//   // Person::func1();//类外访问不到私有静态成员函数
//
//}
//int main()
//{
//    test1();
//
//
//
//    system("pause");
//    return 0;
//}