//#include <iostream>
//using namespace std;
//class Person {
//	friend ostream& operator<<(ostream& cout, Person& p);
//public:
//	
//	Person(int m_a,int m_b) {
//		this->m_a = m_a;
//		this->m_b = m_b;
//
//	}
//	//���ó�Ա�������� ��������� p.operator(p)  �������ó�Ա��������<<���������Ϊ�޷�ʵ�� cout ���Ҳ�
//	//��Ա����ʵ�ֲ��� p<<cout ����������Ҫ��Ч��
//	//void operator<<(Person &p){ }
//
//
//private:
//	int m_a;
//	int m_b;
//
//};
////ֻ������ȫ�ֺ�������ʵ�����������
////ostream ����ֻ����һ��
////out �� cout �ı��� ���ö��ð�
//ostream& operator<<(ostream& out, Person& p) {
//	out << "a: " << p.m_a << " b: " << p.m_b << endl;
//	return out;
//}
//void test() {
//	Person p(10,20);
//	//cout << endl; //cout << p ����� ���صĻ���cout �� ����� <<  �ֿ��������
//	cout << p << "hello world" << endl;//��ʽ���
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