//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//
////vector�����д���Զ������������
//class Person
//{
//public:
//	Person(string name,int age)
//	{
//		m_name = name;
//		m_age = age;
//
//	}
//public:
//	string m_name;
//	int m_age;
//
//};
////����Զ����������� ָ��
//void test()
//{
//
//	vector<Person>v;
//	Person p1("aaa", 10);
//	Person p2("bbb", 20);
//	Person p3("ccc", 30);
//	Person p4("ddd", 40);
//	Person p5("fff", 50);
//	//���������������
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//	v.push_back(p5);
//	//���������е�����
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)//Person���� �����ó����þ���Person����
//	{
//		cout << "����Ϊ:" << it->m_name << " ���Ϊ: " << it->m_age << endl;
//		cout << "����Ϊ:" << (*it).m_name << " ���Ϊ: " << (*it).m_age << endl;
//	}
//
//
//}
//void test1()
//{
//	vector<Person*> v;
//	Person p1("aaa", 10);
//	Person p2("bbb", 20);
//	Person p3("ccc", 30);
//	Person p4("ddd", 40);
//	Person p5("fff", 50);
//	//���������������
//	v.push_back(&p1);//β�巨
//	v.push_back(&p2);
//	v.push_back(&p3);
//	v.push_back(&p4);
//	v.push_back(&p5);
//	//���������е�����
//	for (vector<Person*>::iterator it = v.begin(); it != v.end(); it++)//ָ������ �����ó����ľ���ָ��
//	{
//		cout << "����Ϊ:" << (*it)->m_name << " ���Ϊ: " << (*it)->m_age << endl;//����ָ��
//	}
//}
//int main()
//{
//	test();
//	test1();
//	system("pause");
//	return 0;
//
//}