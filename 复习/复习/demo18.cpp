//#include <iostream>
//using namespace std;
//class Person {
//public:
//	Person(int m_age) {
//		this->m_age = new int(m_age);
//	}
//	//链式编程  用引用
//	Person& operator=(Person &p) {
//		if (m_age != NULL) {
//			delete m_age;
//			m_age = NULL;
//		}
//		this->m_age = new int(*p.m_age);
//		return *this;
//
//	}
//	~Person() {
//		if (m_age != NULL)
//		{
//			delete m_age;
//			m_age = NULL;
//			return;
//		}
//
//	}
//public:
//	int* m_age;
//};
//void test() {
//	Person p(10);
//	Person p1(20);
//	Person p3(30);
//	//p = p1;
//	p3 = p = p1;
//	//cout << p << endl;
//	cout << "p.m_age = " << *p.m_age << endl;
//	cout << "p1.m_age = " << *p1.m_age << endl;
//	cout << "p3.m_age = " << *p3.m_age << endl;
//
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	a = b = c;
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	cout << "c = " << c << endl;
//	test();
//
//
//
//	system("pause");
//	return 0;
//}