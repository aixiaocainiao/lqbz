////��������idea
////const ֻ��  �ú����
//#include <iostream>
//using namespace std;
//class Person {
//public:
//	//thisָ��ı��� ��ָ�볣�� ָ���ָ���ǲ������޸ĵ� this �൱�� ����(Person * const) this
//	//const Person * const this;
//	//�ڳ�Ա���������const �����ε���this ָ��,��ָ��ָ���ֵҲ�������޸�
//
//	void showPerson() const {
//		//m_age = 100;//����const�����  ����const m_age�������޸�
//		//this->m_age = 100;//�������һ��
//		this->m_b = 100;
//
//	}
//	void func() {
//		m_age = 100;
//	}
//
//public:
//	int m_age;
//	mutable int m_b;//�����������ʹ�ڳ������У�Ҳ�����޸����ֵ
//
//};
////������
//void test() {
//	Person p;
//	p.showPerson();
//
//}
////������
//void test01() {
//	const Person p1;//�ڶ���ǰ��const����Ϊ������
//	//p1.m_age = 100;
//	p1.m_b = 100;//m_b������ֵ���ڳ�������Ҳ�����޸�
//	//������ֻ�ܵ��ó�����
//	p1.showPerson();
//	//p1.func(); //������ �����Ե�����ͨ��Ա��������Ϊ��ͨ��Ա�����ǿ����޸�����
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