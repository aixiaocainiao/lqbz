//QT版本可以
#include <iostream>
using namespace std;
/*
	constexpr的限制:
		函数中只能有一个返回值(有极少特例)
		函数必须有返回值(不能是void函数)
		在使用前必须有定义
		return返回语句表达式中不能使用非常量表达式的函数全局数据 且必须是一个常量表达式


*/
#if 0
constexpr int func()
{
	//函数中只能有一个返回值(有极少特例)
	constexpr int tmp = 1;
	return tmp;//错误的

}
int a = 1;
constexpr int func02()
{
	//return返回语句表达式中不能使用非常量表达式的函数全局数据 且必须是一个常量表达式
	return a;//返回全局变量 erro

}
#endif
//正确
constexpr int func01()
{
	//允许包含typedef,using指令，静态断言

	static_assert(1, "fail");
	return 3;

}
#if 0
int test()
{
	return 10;

}
constexpr int func04()
{

	return test();

}
#endif
int main()
{



	system("pause");
	return 0;
}