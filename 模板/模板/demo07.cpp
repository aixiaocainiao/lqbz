//#include <iostream>
//using namespace std;
////��ģ���������������
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
//		cout << "������" << m_name << endl;
//		cout << "����Ϊ: " << m_age << endl;
//
//	}*/
//
//public:
//	T1 m_name;
//	T2 m_age;
//};
////���캯������ʵ��
//template<class T1,class T2>
//Person<T1, T2>::Person(T1 name, T2 age)
//{
//	this->m_name = name;
//	this->m_age = age;
//}
////��Ա����������ʵ��
//template<class T1, class T2>
//void Person<T1, T2>::showPerson()
//{
//	cout << "������" << m_name << endl;
//	cout << "����Ϊ: " << m_age << endl;
//}
////1.ָ����������
//void printPerson(Person<string, int>&p)
//{
//	p.showPerson();
//}
//void test01()
//{
//	Person<string, int>p1("�����", 999);
//	printPerson(p1);
//}
////2.����ģ�廯
//template<class T1,class T2>
//void PrintPerson(Person<T1,T2>&p)
//{
//	p.showPerson();
//	cout << "T1������Ϊ: " << typeid(T1).name() << endl;
//	cout << "T2������Ϊ: " << typeid(T2).name() << endl;
//}
//void test02()
//{
//	Person<string, int>p2("�˽�", 999);
//	PrintPerson(p2);
//}
////3.������ģ�廯
//template<class T>
//void Pr(T &p)
//{
//	p.showPerson();
//	cout << "T������Ϊ: " << typeid(T).name() << endl;
//}
//void test03()
//{
//	Person<string, int>p3("����", 19);
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