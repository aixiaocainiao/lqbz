#include <iostream>
using namespace std;
#include "string"
class Person
{

public:
	//��̬��Ա���� �������������ʼ��
	static int m_A; //��̬��Ա���� 

	//��̬��Ա�����ص㣺
	//1 �ڱ���׶η����ڴ�
	//2 ���������������ʼ��
	//3 ���ж�����ͬһ������

private:
	static int m_B; //��̬��Ա����Ҳ���з���Ȩ�޵�
};
//�����ʼ��
int Person::m_A = 50;
int Person::m_B = 20;

void test01()
{
	//��̬��Ա�������ַ��ʷ�ʽ

	//1��ͨ������
	Person p1;
	p1.m_A = 100;
	//Person p2;
	//p2.m_B = 10;
	cout << "p1.m_A = " << p1.m_A << endl;

	Person p2;
	p2.m_A = 200;
	//�ص�  ���ж�����һ������ һ������ȥ�ı����� ���ж������ʱ����ʹ�õ��ú������

	cout << "p1.m_A = " << p1.m_A << endl; //����ͬһ������
	cout << "p2.m_A = " << p2.m_A << endl;

	//2��ͨ������
	cout << "m_A = " << Person::m_A << endl;


	//cout << "m_B = " << Person::m_B << endl; //˽��Ȩ�޷��ʲ���
}

int main() {

	test01();

	system("pause");

	return 0;
}