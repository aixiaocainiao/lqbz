////类继承与模板 指定类型
//#include <iostream>
//using namespace std;
//#include <string>
//template<class T>
//class Base {
//public:
//	T m;
//};
////class Son : public Base //错误的 必须知道父类中的T类型，才能继承给子类
//class Son : public Base<int>
//{
//public:
//
//};
//void test()
//{
//	Son s1;
//
//}
////如果想灵活的指定父类中的T类型，子类也需要变成类模板
//template<class T1,class T2>
//class Son1 : public Base<T1>
//{
//public:
//
//	Son1()
//	{
//		cout << "T1的类型为: " << typeid(T1).name() << endl;
//		cout << "T2的类型为: " << typeid(T2).name() << endl;
//
//	}
//public:
//	T2 obj;
//};
//void test01()
//{
//
//	Son1<string,int>s2;
//}
//int main()
//{
//	test();
//	test01();
//	system("pause");
//	return 0;
//}