////��̬��Ա��������һ������
////��̬��Ա����ֻ��ʹ�þ�̬��Ա����
///* 
//	�ܽ᣺
//		ͬ����̬��Ա����ʽ�ͷǾ�̬��Ա����ʽһ����ֻ���������ַ��ʷ�ʽ(ͨ�������ͨ��������
//*/
//#include <iostream>
//using namespace std;
//class Base {
//public:
//	Base() {
//		cout << "Base���캯���ĵ��� " << endl;
//	}
//	~Base() {
//		cout << "Base���������ĵ��� " << endl;
//	}
//
//	static void func() {
//		cout << "Base func() " << endl;
//	}
//	static void func(int a) {
//		cout << "Base func(int a) " << endl;
//	}
//
//	static int m_A;//��̬��Ա���� �������� �����ʼ��
//};
//int Base::m_A = 100;
//class Son : public Base {
//public:
//	Son() {
//		cout << "Son���캯���ĵ��� " << endl;
//	}
//	~Son() {
//		cout << "Son���������ĵ��� " << endl;
//	}
//	static void func() {
//		cout << "Son func() " << endl;
//	}
//	static void func(int a) {
//		cout << "Son func(int a) " << endl;
//	}
//
//	static int m_A;
//};
//int Son::m_A = 10;
////ͨ���������
//void test() {
//	Son s;
//	s.func();
//	cout << "s.m_A = " << s.m_A << endl;
//	s.func(10);
//	cout << "s.Base::m_A = " << s.Base::m_A << endl;
//	s.Base::func();
//	s.Base::func(100);
//}
//void test01() {
//
//	Son::func();
//	Son::func(10);
//	cout << "Son�� Son::m_A = " << Son::m_A << endl;
//	Son::Base::func();
//	Son::Base::func(20);
//	cout << "Base�� Son::Base::m_A = " << Son::Base::m_A << endl;
//}
//int main()
//{
//
//	//test();
//	test01();
//
//	system("pause");
//	return 0;
//}