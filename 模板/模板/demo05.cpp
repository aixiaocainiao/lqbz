//#include <iostream>
//using namespace std;
//#include <string>
////��ģ���뺯��ģ�������
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
//		cout << "����Ϊ:" << m_name << endl;
//		cout << "����Ϊ: " << m_age << endl;
//
//	}
//
//public:
//	NameType m_name;
//	AgeType m_age;
//
//};
////��ģ��û���Զ������Ƶ���ʹ�÷�ʽ
//void test()
//{
//
//	//Person p("�����", 33); ����� �޷����Զ������Ƶ�
//	Person<string, int>p1("�����", 1000);
//	p1.showPerson();
//
//}
////��ģ����ģ������б��п�����Ĭ�ϲ���
//void test01()
//{
//	Person<string>P2("�˽�", 1000);//Ĭ��  ��ȷ
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