#include <iostream>
using namespace std;
#include "swap.h"
////函数的分文件编写
////实现两个数字的交换的函数
////函数的声明
//void swap(int num1, int num2);
////函数的定义
//void swap(int num1, int num2)
//{
//	int temp = num1;
//	num1 = num2;
//	num2 = temp;
//
//	cout << " num1 = " << num1 << endl;
//	cout << " num2 = " << num2 << endl;
//}


int main()
{

	int a = 10;
	int b = 20;
	swap(a, b);




	system("pause");
	return 0;
}