//#include <iostream>
//#include <string>
//using namespace std;
//class Person
//{
//public:
//    int m_a;//非静态成员变量才属于类的对象上
//    static int m_b;//类内声明  //静态成员变量不占用对象空间
//    void func()// 函数不占用对象空间，所有函数共享一个函数实例
//    {
//
//    }
//    static void func1()//静态成员函数 不占对象空间
//    {
//
//    }
//
//};
//int Person::m_b = 0;
//void test()
//{
//    Person p;
//    //空对象占用的字节数
//    cout << "sizeof(p)占用的字节数: " << sizeof(p) << endl;
//}
//void test1()
//{
//    Person p;
//    cout << "sizeof(p)占用的字节数: " << sizeof(p) << endl;
//
//}
//int main()
//{
//
//    //test();
//    test1();
//    system("pause");
//    return 0;
//}