#include <iostream>
#include <string>
using namespace std;
void func(int a)
{

	cout << "func(int a)�ĵ��ã� " << endl;
}
void func(double a)
{

	cout << "func(double a)�ĵ��ã� " << endl;
}
void func(int a,int b)
{

	cout << "func(int a,int b)�ĵ��ã� " << endl;
}
void func(int a, double b)
{

	cout << "func(int a,int b)�ĵ��ã� " << endl;
}
void func(double  a, int b)
{

	cout << "func(int a,int b)�ĵ��ã� " << endl;
}
//int  func(double  a, int b)//�����ķ���ֵ��������Ϊ�������ص�����
//{
//
//	cout << "func(int a,int b)�ĵ��ã� " << endl;
//	return 0;
//}
int main()
{


	func(10);
	func(3.14);
	func(10, 20);
	func(10, 3.12);
	func(3.12, 8);



	system("pause");
	return 0;
}