#include <iostream>
#include <string>
using namespace std;
void func(const int& a)
{
	//a = 30;����const �㲻�������β��޸�ʵ��
	cout << "a = " << a << endl;

}
int main()
{

	int a = 10;
	func(a);

	//int& ref = a;//�Զ�ת��Ϊ int *const ref = &a;ָ�볣����ָ��ָ�򲻿ɸģ�Ҳ˵��Ϊʲô���ò��ɸ�

	//b = 20;//�ڲ�����ref�����ã��Զ�������ת��Ϊ��*ref = 20;
	cout << "a = " << a << endl;
	//cout << "ref = " << ref<< endl;

	//���ۣ�C++�Ƽ������ü�������Ϊ�﷨���㣬���ñ�����ָ�볣�����������е�ָ�����������������������
	system("pause");
	return 0;


}