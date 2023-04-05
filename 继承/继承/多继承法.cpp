////**C++实际开发中不建议用多继承**
////C++允许**一个类继承多个类**
////语法：` class 子类 ：继承方式 父类1 ， 继承方式 父类2...`
////多继承可能会引发父类中有同名成员出现，需要加作用域区分
//#include <iostream>
//#include <string>
//using namespace std;
//class base1
//{
//public:
//    base1()
//    {
//        m_A = 100;
//    }
//public: 
//    int m_A;
//};
//class base2
//{
//public:
//    base2()
//    {
//        m_A = 200;
//    }
//public:
//    int m_A;
//};
////语法：class 子类：继承方式 父类1 ，继承方式 父类2 
//class son :public base1, public base2
//{
//public:
//    son()
//    {
//        m_A = 300;
//        m_B = 400;
//
//    }
//
//
//
//public:
//    int m_A;
//    int m_B;
//
//};
////多继承容易产生成员同名的情况
////通过使用类名作用域可以区分调用哪一个基类的成员
//void test()
//{
//    son s1;
//    cout << "sizeof(s1) = " << sizeof(s1) << endl;
//    cout << "s1.m_A = " << s1.m_A << endl;
//    cout << "s1.m_B = " << s1.m_B << endl;
//    cout << "s1.base::m_B = " <<s1.base1::m_A  << endl;
//    cout << "s2.base1::m_B = " << s1.base2::m_A << endl;
//}
//int main()
//{
//    test();
//
//    system("pause");
//    return 0;
//}