#include <iostream>
#include <string>
using namespace std;
void func(int& a)
{
	cout << "func(int& a)调用: " << endl;

}
void func(const int& a)
{
	cout << "func(const int& a)调用: " << endl;

}
//函数重载遇到函数默认值
/*void func2(int a，int b = 20)
{
	cout << "func(int a，int b = 20)调用: " << endl;

}
void func2(int a)
{
	cout << "func(int& a)调用: " << endl;

}*/
int main()
{
	int a = 10;
	func(a);// 调用无const
	func(10);// 10为常量 调用有const
	
	//func2(10);

	system("pause");
	return 0;
}