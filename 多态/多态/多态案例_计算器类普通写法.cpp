//#include <iostream>
//#include <string>
//using namespace std;
////案例描述
////分别利用普通写法和多态技术，设计实现两个操作数进行运算的计算器类
//class catlat
//{
//public:
//    int ysan(string si)
//    {
//        if (si == "+")
//        {
//            return m_a + m_b;
//        }
//        else if (si == "-")
//        {
//            return m_a - m_b;
//        }
//        else if  (si == "*")
//        {
//            return m_a * m_b;
//        }
//        //如果想扩展新的功能，需要修改源码
//        //在真的开发中 提倡 开闭原则
//        //开闭原则 ：对扩展进行开放  对修改进行关闭
//    }
//
//
//public:
//    int m_a;
//    int m_b;
//
//
//
//};
//void test()
//{
//    catlat c1;
//    c1.m_a = 10;
//    c1.m_b = 10;
//    cout << c1.m_a << " + " << c1.m_b << " = " << c1.ysan("+") << endl;
//    cout << c1.m_a << " - " << c1.m_b << " = " << c1.ysan("-") << endl;
//    cout << c1.m_a << " * " << c1.m_b << " = " << c1.ysan("*") << endl;
//}
//int main()
//{
//
//    test();
//    system("pause");
//    return 0;
//}
