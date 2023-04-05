#include <iostream>
#include <string>
using namespace std;
//第一种方式 传参
void zs(int a)
{

	cout << "a = " << a << "我要翻三个跟投在表白 " << endl;

}
void ls(int a)
{

	cout << "a = " << a << "我有一直小小鸟 " << endl;

}
//void show(void (*pf)(int))
void show(void (*pf)(int),int b)
{

	cout << "表白之前的准备工作" << endl;
	//int b = 3;
	pf(b);
	cout << "表白之后的收尾工作已经完成 " << endl;

}
void test()
{
	show(zs, 3);
	show(ls, 4);
	//show(zs);
	//show(ls);

}
int main()
{

	test();

	system("pause");
	return 0;
}