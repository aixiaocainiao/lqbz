#include <iostream>
#include <stdlib.h>

//定义一个命名空间为myNum,在该命名空间中定义一个整型变量x,
//并给该变量赋值为105；使用C++新特性判断myNum命名空间下的变量是奇数还是偶数。
namespace myNum {

	int x = 105;
	


}
using namespace myNum;
int main()
{
	if (myNum::x % 2 == 0)
	{
		std::cout << "偶数" << std::endl;

	}
	else
	{
		std::cout << "奇数" << std::endl;
	}



	system("pause");
	return 0;
}
