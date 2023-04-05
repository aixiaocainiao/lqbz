////常函数的idea
////const 只读  好好理解
//#include <iostream>
//using namespace std;
//class Person {
//public:
//	//this指针的本质 是指针常量 指针的指向是不可以修改的 this 相当于 类型(Person * const) this
//	//const Person * const this;
//	//在成员函数后面加const ，修饰的是this 指向,让指针指向的值也不允许被修改
//
//	void showPerson() const {
//		//m_age = 100;//不加const允许的  加了const m_age不允许被修改
//		//this->m_age = 100;//和上面的一样
//		this->m_b = 100;
//
//	}
//	void func() {
//		m_age = 100;
//	}
//
//public:
//	int m_age;
//	mutable int m_b;//特殊变量，即使在常函数中，也可以修改这个值
//
//};
////常函数
//void test() {
//	Person p;
//	p.showPerson();
//
//}
////常对象
//void test01() {
//	const Person p1;//在对象前加const，变为常对象
//	//p1.m_age = 100;
//	p1.m_b = 100;//m_b是特殊值，在常对象下也可以修改
//	//常对象只能调用常函数
//	p1.showPerson();
//	//p1.func(); //常对象 不可以调用普通成员函数，因为普通成员函数是可以修改属性
//}
//int main()
//{
//
//
//	test();
//	test01();
//
//	system("pause");
//	return 0;
//}