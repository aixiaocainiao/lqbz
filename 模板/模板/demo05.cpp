//#include <iostream>
//using namespace std;
//#include <string>
////类模板与函数模板的区别
//template<class NameType,class AgeType = int>
//class Person {
//
//public:
//	Person(NameType name, AgeType age)
//	{
//		this->m_name = name;
//		this->m_age = age;
//	} 
//	void showPerson()
//	{
//		cout << "姓名为:" << m_name << endl;
//		cout << "年龄为: " << m_age << endl;
//
//	}
//
//public:
//	NameType m_name;
//	AgeType m_age;
//
//};
////类模板没有自动类型推导的使用方式
//void test()
//{
//
//	//Person p("孙悟空", 33); 错误的 无法用自动类型推导
//	Person<string, int>p1("孙悟空", 1000);
//	p1.showPerson();
//
//}
////类模板在模板参数列表中可以有默认参数
//void test01()
//{
//	Person<string>P2("八戒", 1000);//默认  正确
//	P2.showPerson();
//}
//int main()
//{
//	test();
//	test01();
//
//	system("pause");
//	return 0;
//}