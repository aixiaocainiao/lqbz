#include <iostream>
#include <string>
using namespace std;
void func(int& a)
{
	cout << "func(int& a)����: " << endl;

}
void func(const int& a)
{
	cout << "func(const int& a)����: " << endl;

}
//����������������Ĭ��ֵ
/*void func2(int a��int b = 20)
{
	cout << "func(int a��int b = 20)����: " << endl;

}
void func2(int a)
{
	cout << "func(int& a)����: " << endl;

}*/
int main()
{
	int a = 10;
	func(a);// ������const
	func(10);// 10Ϊ���� ������const
	
	//func2(10);

	system("pause");
	return 0;
}