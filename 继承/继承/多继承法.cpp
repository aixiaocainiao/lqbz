////**C++ʵ�ʿ����в������ö�̳�**
////C++����**һ����̳ж����**
////�﷨��` class ���� ���̳з�ʽ ����1 �� �̳з�ʽ ����2...`
////��̳п��ܻ�������������ͬ����Ա���֣���Ҫ������������
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
////�﷨��class ���ࣺ�̳з�ʽ ����1 ���̳з�ʽ ����2 
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
////��̳����ײ�����Աͬ�������
////ͨ��ʹ������������������ֵ�����һ������ĳ�Ա
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