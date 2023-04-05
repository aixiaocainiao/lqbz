//#include <iostream>
//using namespace std;
////void func(int *a)错的 形参中的数组不是数组 而是指针变量，无法确定元素个数
//void func(int a[])  
//{
//	//基于范围的for循环，这个范围要确定后才能使用
//	for (auto tmp : a)//错的
//	{
//		cout << tmp << endl;
//	}
//
//}
//int main()
//{
//	int a[]{ 1,2,3,4,5 };
//	int b = sizeof(a) / sizeof(*a);//元素个数
//	//1.
//#if 0
//	//值传递 
//	for (int i = 0; i < b; i++)
//	{
//		int tmp = a[i];
//		cout << tmp << " , ";
//
//	}
//	cout << endl;
//
//	for (int tmp : a)
//	{
//		cout << tmp << " , ";
//
//	}
//	cout << endl;
//#endif
//	//引用 可以改变数值的
//	for (int i = 0; i < b; i++)
//	{
//		int& tmp = a[i];
//		tmp *= 2;
//		cout << tmp << ",";
//
//	}
//	cout << endl;
//	for (int& tmp : a)
//	{
//		tmp *= 2;
//		cout << tmp << ",";
//
//	}
//	cout << endl;
//
//	func(a);
//	system("pause");
//	return 0;
//}