////函数模板注意事项
////自动类型推导 ，必须推导出一致 的数据类型 T ，才可以使用
////模板必须要确定出T的数据类型，才可以使用
//#include <iostream>
//#include <string> 
//using namespace std;
//template<class T>
//void mySwap(T& a, T& b)
//{
//
//
//	T temp = a;
//	a = b;
//	b = temp;
//}
//void test()
//{
//	int a = 10;
//	int b = 20;
//	//自动类型推导
//	mySwap(a, b);
//	//指定类型
//	mySwap<int>(a, b);
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//
//
//}
//int main()
//{
//	test();
//
//	system("pause");
//	return 0;
//}