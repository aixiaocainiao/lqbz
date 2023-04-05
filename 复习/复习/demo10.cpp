////this指针的用处
//#include <iostream>
//using namespace std;
//class Person {
//public:
//	Person(int age) {
//		this->age = age;
//	}
//	Person& Personadd(const Person& p) {
//		this->age += p.age;
//		return *this;
//	}
//	~Person() {
//
//	}
//
//public:
//	int age;
//
//};
//void test() {
//	Person p(10);
//	cout << "p = " << p.age << endl;
//	Person p1(10);
//	p1.Personadd(p);
//	cout << "p1 = " << p1.age << endl;
//	p1.Personadd(p).Personadd(p1).Personadd(p);
//	cout << "p1 = " << p1.age << endl;
//
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