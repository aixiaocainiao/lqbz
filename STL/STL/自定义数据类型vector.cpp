//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//
////vector容器中存放自定义的数据类型
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
////存放自定义数据类型 指针
//void test()
//{
//
//	vector<Person>v;
//	Person p1("aaa", 10);
//	Person p2("bbb", 20);
//	Person p3("ccc", 30);
//	Person p4("ddd", 40);
//	Person p5("fff", 50);
//	//向容器中添加数据
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//	v.push_back(p5);
//	//遍历容器中的数据
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)//Person类型 解引用出来得就是Person类型
//	{
//		cout << "姓名为:" << it->m_name << " 年纪为: " << it->m_age << endl;
//		cout << "姓名为:" << (*it).m_name << " 年纪为: " << (*it).m_age << endl;
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
//	//向容器中添加数据
//	v.push_back(&p1);//尾插法
//	v.push_back(&p2);
//	v.push_back(&p3);
//	v.push_back(&p4);
//	v.push_back(&p5);
//	//遍历容器中的数据
//	for (vector<Person*>::iterator it = v.begin(); it != v.end(); it++)//指针类型 解引用出来的就是指针
//	{
//		cout << "姓名为:" << (*it)->m_name << " 年纪为: " << (*it)->m_age << endl;//耳机指针
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