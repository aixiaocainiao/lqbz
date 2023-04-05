////总结：同名静态成员处理方式和非静态处理方式一样，
////只不过有两种访问的方式（通过对象 和 通过类名）
//#include <iostream>
//#include <string>
//using namespace std;
//class Base
//{
//public:
//    Base()
//    {
//        m_A = 100;
//    }
//    void func()
//    {
//        cout << "Base-func()下的调用" << endl;
//    }
//    void func(int a)
//    {
//        cout << "Base-func(int a)下的调用" << endl;
//    }
//public:
//    int m_A;
//};
//class son:public Base
//{
//public:
//    son()
//    {
//        m_A = 200;
//    }
//    //当子类与父类拥有同名的成员函数。子类会隐藏父类中所有版本的同名成员函数
//    //如果想访问父类中被隐藏的同名成员函数，需要加父类的作用域
//    void func()
//    {
//        cout << "son-func()下的调用" << endl;
//    }
//
//
//public:
//    int m_A;
//};
//void test()
//{
//    son s1;
//    cout << "s1.m_A = " << s1.m_A << endl;
//    cout << "Base 下的 s1.m_A = " << s1.Base::m_A << endl;
//    s1.func();
//    s1.Base::func();
//    //s1.func(10); 错误的
//    s1.Base::func(10);
//    
//}
//int main()
//{
//    test();
//
//    system("pause");
//    return 0;
//}
///*1. 子类对象可以直接访问到子类中同名成员
//2. 子类对象加作用域可以访问到父类同名成员
//3. 当子类与父类拥有同名的成员函数，子类会隐藏父类中同名成员函数
//，加作用域可以访问到父类中同名函数*/