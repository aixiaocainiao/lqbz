#include <iostream>
using namespace std;
//这两个都是发生在运行阶段 所以不能在枚举中使用 枚举值初始化必须是常量值
int GetNum()
{

	return 3;

}
const int GetNum2()
{

	return 3;

}
//constexpr 常量表达式 发生在编译阶段
constexpr int GetNum3()
{

	return 3;


}
int main()
{

	//enum
	//{
	//	//枚举成员初始化 ，必须是整形常量
	//	//e1 = GetNum(),e2  int GetNum()
	//	//e1 = GetNum(), e2  const int GetNum2()
	//	//e1 = GetNum(), e2   vs不支持而已 但是std11在QT中和其他中是可以支持的也是我们要学习的std11
	//};
	enum{ e1 = GetNum(), e2 };		//OK的 vs编译器的问题
	constexpr int tmp = GetNum3z();	//OK的 vs编译器的问题
	enum { a1 = tmp, a2 };			//OK的 vs编译器的问题  发生在编译阶段

	system("pause");
	return 0;
}