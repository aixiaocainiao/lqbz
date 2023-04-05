//不要放回局部变量引用
#include <iostream>
using namespace std;
//返回局部变量引用

int& test01()
{
	static int a = 10;
	//int a = 10;//局部变量 存放在堆中，只能使用一次
	return a;

}
int& test02()
{
	static int a = 10;//静态变量  不存放在堆中 存放在全局区中 全局区的数据在程序结束后系统释放
	return a;

}
int main()
{
	//不能返回局部变量的引用
	int& ref = test01();
	cout << "ref的值为: " << ref << endl;
	//cout << "ref的值为: " << ref << endl;//局部变量执行一次后会自动释放，输出的值不对的
	cout << "ref的值为: " << ref << endl;
	cout << "ref的值为: " << ref << endl;
	int& ref1 = test02();
	//相当于 int &b = a;
	//a = 20
	//cout << b << endl;

	test02() = 20;//如果函数的返回值是引用，这个函数可以作为左值
	cout << "ref1的值为: " << ref1 << endl;



	system("pause");
	return 0;
}