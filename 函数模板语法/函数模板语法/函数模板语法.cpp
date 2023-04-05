#include <iostream>
#include <string>
using namespace std;
void swapInt(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;

}
void swapDouble(double & a, double& b)
{
	double temp = a;
	a = b;
	b = temp;

}
//函数模板
template<typename T>//声明一个模板，告诉编译器后面代码中紧跟着的T不要报错，T是一个通用数据类型
void mySwap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;


}
void test()
{
	int a = 10;
	int b = 20;

	//swapInt(a, b);

	//利用函数模板交换
	//两种方式使用函数模板
	
	//1、自动类型推导
	//mySwap(a, b);

	//2、显示指定类型
	mySwap<int>(a, b);//int 指的是T的类型


	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	/*double a = 10;
	double b = 20;
	swapDouble(a, b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;*/

}
int main()
{
	test();



	system("pause");
	return 0;



}