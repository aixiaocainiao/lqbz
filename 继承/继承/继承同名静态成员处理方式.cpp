////�ܽ᣺ͬ����̬��Ա����ʽ�ͷǾ�̬����ʽһ����
////   ֻ���������ַ��ʵķ�ʽ��ͨ������ �� ͨ��������
////��̬��Ա���� �������� �����ʼ��
//#include <iostream>
//#include <string>
//using namespace std;
//class Base
//{
//public:
//    static int m_A;//���������������ʼ��
//    static void func()
//    {
//        cout << "Base �µ�static void func()�ĵ���" << endl;
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
//        cout << "son �µ�static void func()�ĵ���" << endl;
//
//    }
//
//};
//int son::m_A = 200;
//void test()
//{
//    //1.ͨ���������
//    son s1;
//    cout << "son �µ�s1.m_A = " << s1.m_A << endl;
//    cout << "Base �µ� s1.m_A = " << s1.Base::m_A << endl;
//    // 2��ͨ����������
//    cout << "ͨ����������" << endl;
//    cout << "son �µ�s1.m_A =" << s1.son::m_A << endl;
//
//    cout << "Base �µ�s1.m_A =" << s1.son::Base::m_A << endl;
//    //son�������·��ʸ���Base�е�m_A
//    //1.ͨ���������
//    //��һ����������ͨ��������ʽ���� �ڶ���::������ʸ�����������
//
//
//}
//void test2()
//{
//    son s2;
//    //ͨ���������
//    s2.func();
//    s2.son::Base::func();
//    //ͨ����������
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
