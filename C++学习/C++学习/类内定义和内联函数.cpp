//内联函数
#include <iostream>
inline void fun()
{

	std::cout << "hello" << std::endl;

}
//普通函数在调用时先找到函数体，执行完函数内容后再返回调用函数的语句；
//内联函数inline在编译时将函数体代码和实参替换函数调用语句，执行速度更快，但只局限于简单的函数。

//类内定义是指在类里面定义成员函数的函数体（优先编译为inline）
//不会把inline写出来，但是会优先编译为inline