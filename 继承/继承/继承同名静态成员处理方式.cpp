////总结：同名静态成员处理方式和非静态处理方式一样，
////   只不过有两种访问的方式（通过对象 和 通过类名）
////静态成员变量 类内声明 类外初始化
//#include <iostream>
//#include <string>
//using namespace std;
//class Base
//{
//public:
//    static int m_A;//类内声明，类外初始化
//    static void func()
//    {
//        cout << "Base 下的static void func()的调用" << endl;
//
//    }
//   
//};
//int Base::m_A = 100;
//class son :public Base
//{
//public:
//    static int m_A;
//    static void func()
//    {
//
//        cout << "son 下的static void func()的调用" << endl;
//
//    }
//
//};
//int son::m_A = 200;
//void test()
//{
//    //1.通过对象访问
//    son s1;
//    cout << "son 下的s1.m_A = " << s1.m_A << endl;
//    cout << "Base 下的 s1.m_A = " << s1.Base::m_A << endl;
//    // 2、通过类名访问
//    cout << "通过类名访问" << endl;
//    cout << "son 下的s1.m_A =" << s1.son::m_A << endl;
//
//    cout << "Base 下的s1.m_A =" << s1.son::Base::m_A << endl;
//    //son作用域下访问父类Base中的m_A
//    //1.通过对象访问
//    //第一个：：代表通过类名方式访问 第二个::代表访问父类作用域下
//
//
//}
//void test2()
//{
//    son s2;
//    //通过对象访问
//    s2.func();
//    s2.son::Base::func();
//    //通过类名访问
//    son::func();
//    son::Base::func();
//
//
//}
//int main()
//{
//    //test();
//    test2();
//    system("pause");
//    return 0;
//}
