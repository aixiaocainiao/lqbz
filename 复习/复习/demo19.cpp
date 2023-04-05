////重载关系运算符
//#include <iostream>
//#include <string>
//using namespace std;
//class Person {
//public:
//	Person(string name,int age) {
//		m_name = name;
//		m_age = age;
//	}
//	//成员函数重载
//	bool operator=(Person& p) {
//		if (this->m_age == p.m_age && this->m_name == p.m_name) {
//			return true;
//		}
//		return false;
//	}
//	bool operator!=(Person& p) {
//		if (this->m_age == p.m_age && this->m_name == p.m_name) {
//			return false;
//		}
//		return true;
//	}
//
//public:
//	string m_name;
//	int m_age;
//};
//void test() {
//	Person p1("孙悟空", 18);
//	Person p2("孙悟空",18);
//	if (p1 = p2) {
//		cout << "p1 与 p2 相等 " << endl;
//	}
//	else {
//		cout << "p1 与 p2 不相等 " << endl;
//	}
//	if (p1 != p2) {
//		cout << "p1 与 p2 不相等 " << endl;
//	}
//	else {
//		cout << "p1 与 p2 相等 " << endl;
//	}
//}
//int main()
//{
//
//	test();
//
//
//	system("pause");
//	return 0;
//}