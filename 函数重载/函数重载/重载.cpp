#include <iostream>
#include <string>
using namespace std;
void func(int a)
{

	cout << "func(int a)的调用： " << endl;
}
void func(double a)
{

	cout << "func(double a)的调用： " << endl;
}
void func(int a,int b)
{

	cout << "func(int a,int b)的调用： " << endl;
}
void func(int a, double b)
{

	cout << "func(int a,int b)的调用： " << endl;
}
void func(double  a, int b)
{

	cout << "func(int a,int b)的调用： " << endl;
}
//int  func(double  a, int b)//函数的返回值不可以作为函数重载的条件
//{
//
//	cout << "func(int a,int b)的调用： " << endl;
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