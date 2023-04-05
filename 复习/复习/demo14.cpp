//#include <iostream>
//using namespace std;
//class Person {
//public:
//	Person(){}
//	Person(int a, int b) {
//		this->m_a = a;
//		this->m_b = b;
//
//	}
//public:
//	//成员函数
//	Person& addPerson(Person& p) {
//		this->m_a += p.m_a;
//		this->m_b += p.m_b;
//		return *this;
//	}
//	//Person& operator+ (Person& p) {
//	//	Person temp;//需要存在，默认构造函数
//	//	temp.m_a = this->m_a + p.m_a;
//	//	temp.m_b = this->m_b + p.m_b;
//	//	return temp;
//	//}
//	
//
//
//
//public:
//	int m_a;
//	int m_b;
//};
////全局
//Person operator+(Person& p1, Person& p2) {
//	Person temp;
//	temp.m_a = p1.m_a + p2.m_a;
//	temp.m_b = p1.m_b + p2.m_b;
//	return temp;
//}
//Person operator+(Person& p1, int num) {
//	Person temp;
//	temp.m_a = p1.m_a + num;
//	temp.m_b = p1.m_b + num;
//	return temp;
//}
//void test() {
//	Person p1(10,20);
//	Person p2(20,30);
//	p2.addPerson(p1).addPerson(p1);
//	//成员函数重载调用本质
//	//Person p3 = p1.operator+(p2)
//	
//	//全局函数调用本质
//	//Person p3 = operator+(p1,p2)
//	Person p3 = p1 + p2;
//	//运算符重载也可以发生函数重载
//	Person p4 = p1 + 100;//相当于operator(p1,100)
//	cout << "p3.m_a = " << p3.m_a << endl;
//	cout << "p3.m_b = " << p3.m_b << endl;
//
//
//
//}
//int main()
//{
//	test();
//
//
//
//	system("pause");
//	return 0;
//}