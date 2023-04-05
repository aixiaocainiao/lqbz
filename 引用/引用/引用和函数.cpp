//#include <iostream>
//using namespace std;
//
////1. 值传递
//void mySwap01(int a, int b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
////2. 地址传递
//void mySwap02(int* a, int* b) 
//{
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
////引用传递
//void mySwap(int& a,int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//
//}
////写的形式和值传递的形式一样
//int main() {
//
//	int a = 10;
//	int b = 20;
//
//	mySwap01(a, b);
//	cout << "a:" << a << " b:" << b << endl;
//
//	mySwap02(&a, &b);
//	cout << "a:" << a << " b:" << b << endl;
//
//	mySwap(a, b);
//	cout << "a:" << a << " b:" << b << endl;
//
//	system("pause");
//
//	return 0;
//}
////总结：通过引用参数产生的效果同按地址传递是一样的。引用的语法更清楚简单