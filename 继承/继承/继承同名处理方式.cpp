////�ܽ᣺ͬ����̬��Ա����ʽ�ͷǾ�̬����ʽһ����
////ֻ���������ַ��ʵķ�ʽ��ͨ������ �� ͨ��������
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
//        cout << "Base-func()�µĵ���" << endl;
//    }
//    void func(int a)
//    {
//        cout << "Base-func(int a)�µĵ���" << endl;
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
//    //�������븸��ӵ��ͬ���ĳ�Ա��������������ظ��������а汾��ͬ����Ա����
//    //�������ʸ����б����ص�ͬ����Ա��������Ҫ�Ӹ����������
//    void func()
//    {
//        cout << "son-func()�µĵ���" << endl;
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
//    cout << "Base �µ� s1.m_A = " << s1.Base::m_A << endl;
//    s1.func();
//    s1.Base::func();
//    //s1.func(10); �����
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
///*1. ����������ֱ�ӷ��ʵ�������ͬ����Ա
//2. ����������������Է��ʵ�����ͬ����Ա
//3. �������븸��ӵ��ͬ���ĳ�Ա��������������ظ�����ͬ����Ա����
//������������Է��ʵ�������ͬ������*/