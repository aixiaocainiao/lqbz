//#include <iostream>
//using namespace std;
////类模板对象做函数参数
//#include <string>
//template<class T1,class T2>
//class Person {
//public:
//	Person(T1 name, T2 age);
//	/*{
//		this->m_name = name;
//		this->m_age = age;
//
//	}*/
//	void showPerson();
//	/*{
//		cout << "姓名：" << m_name << endl;
//		cout << "年龄为: " << m_age << endl;
//
//	}*/
//
//public:
//	T1 m_name;
//	T2 m_age;
//};
////构造函数类外实现
//template<class T1,class T2>
//Person<T1, T2>::Person(T1 name, T2 age)
//{
//	this->m_name = name;
//	this->m_age = age;
//}
////成员函数的类外实现
//template<class T1, class T2>
//void Person<T1, T2>::showPerson()
//{
//	cout << "姓名：" << m_name << endl;
//	cout << "年龄为: " << m_age << endl;
//}
////1.指定传入数据
//void printPerson(Person<string, int>&p)
//{
//	p.showPerson();
//}
//void test01()
//{
//	Person<string, int>p1("孙悟空", 999);
//	printPerson(p1);
//}
////2.参数模板化
//template<class T1,class T2>
//void PrintPerson(Person<T1,T2>&p)
//{
//	p.showPerson();
//	cout << "T1的类型为: " << typeid(T1).name() << endl;
//	cout << "T2的类型为: " << typeid(T2).name() << endl;
//}
//void test02()
//{
//	Person<string, int>p2("八戒", 999);
//	PrintPerson(p2);
//}
////3.整个类模板化
//template<class T>
//void Pr(T &p)
//{
//	p.showPerson();
//	cout << "T的类型为: " << typeid(T).name() << endl;
//}
//void test03()
//{
//	Person<string, int>p3("唐生", 19);
//	Pr(p3);
//}
//
//int main()
//{
//	test01();
//	test02();
//	test03();
//	system("pause");
//	return 0;
//}