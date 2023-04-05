//#include <iostream>
//using namespace std;
////类模板函数中的成员函数创建时机
////类模板中成员函数在调用时才去创建
//class Person1
//{
//public:
//	void showPerson() {
//		cout << "Person1 SHOW " << endl;
//	}
//
//};
//class Person2
//{
//public:
//	void showPerson1() {
//		cout << "Person2 SHOW " << endl;
//	}
//
//};
//template<class T>
//class myClass
//{
//public:
//	void func()
//	{
//		obj.showPerson();
//	}
//	void func1()
//	{
//		obj.showPerson1();
//
//	}
//public:
//	T obj;
//};
//void test()
//{
//	myClass<Person1>m;
//	m.func();
//	//m.func1();
//
//
//
//}
//int main()
//{
//
//	test();
//	system("pause");
//	return 0;
//}