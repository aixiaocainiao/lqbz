//��Ҫ�Żؾֲ���������
#include <iostream>
using namespace std;
//���ؾֲ���������

int& test01()
{
	static int a = 10;
	//int a = 10;//�ֲ����� ����ڶ��У�ֻ��ʹ��һ��
	return a;

}
int& test02()
{
	static int a = 10;//��̬����  ������ڶ��� �����ȫ������ ȫ�����������ڳ��������ϵͳ�ͷ�
	return a;

}
int main()
{
	//���ܷ��ؾֲ�����������
	int& ref = test01();
	cout << "ref��ֵΪ: " << ref << endl;
	//cout << "ref��ֵΪ: " << ref << endl;//�ֲ�����ִ��һ�κ���Զ��ͷţ������ֵ���Ե�
	cout << "ref��ֵΪ: " << ref << endl;
	cout << "ref��ֵΪ: " << ref << endl;
	int& ref1 = test02();
	//�൱�� int &b = a;
	//a = 20
	//cout << b << endl;

	test02() = 20;//��������ķ���ֵ�����ã��������������Ϊ��ֵ
	cout << "ref1��ֵΪ: " << ref1 << endl;



	system("pause");
	return 0;
}