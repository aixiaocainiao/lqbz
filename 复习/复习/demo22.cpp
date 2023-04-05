////静态成员变量共享一份数据
////静态成员函数只能使用静态成员变量
///* 
//	总结：
//		同名静态成员处理方式和非静态成员处理方式一样，只不过有两种访问方式(通过对象和通过类名）
//*/
//#include <iostream>
//using namespace std;
//class Base {
//public:
//	Base() {
//		cout << "Base构造函数的调用 " << endl;
//	}
//	~Base() {
//		cout << "Base析构函数的调用 " << endl;
//	}
//
//	static void func() {
//		cout << "Base func() " << endl;
//	}
//	static void func(int a) {
//		cout << "Base func(int a) " << endl;
//	}
//
//	static int m_A;//静态成员变量 类内声明 类外初始化
//};
//int Base::m_A = 100;
//class Son : public Base {
//public:
//	Son() {
//		cout << "Son构造函数的调用 " << endl;
//	}
//	~Son() {
//		cout << "Son析构函数的调用 " << endl;
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
////通过对象访问
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
//	cout << "Son下 Son::m_A = " << Son::m_A << endl;
//	Son::Base::func();
//	Son::Base::func(20);
//	cout << "Base下 Son::Base::m_A = " << Son::Base::m_A << endl;
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