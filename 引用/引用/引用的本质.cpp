#include <iostream>
#include <string>
using namespace std;
void func(const int& a)
{
	//a = 30;加上const 便不可以用形参修改实参
	cout << "a = " << a << endl;

}
int main()
{

	int a = 10;
	func(a);

	//int& ref = a;//自动转换为 int *const ref = &a;指针常量是指针指向不可改，也说明为什么引用不可改

	//b = 20;//内部发现ref是引用，自动帮我们转换为：*ref = 20;
	cout << "a = " << a << endl;
	//cout << "ref = " << ref<< endl;

	//结论：C++推荐用引用技术，因为语法方便，引用本质是指针常量，但是所有的指针操作编译器都帮我们做了
	system("pause");
	return 0;


}