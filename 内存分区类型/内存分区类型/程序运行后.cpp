////栈区 有编译器自动分配释放 存放函数的参数值 局部变量等
////注意事项：不要返回局部变量的地址 ，栈区开辟的数据由编译器自动释放
//#include <iostream>
//#include <string>
//using namespace std;
//int * func()
//{
//
//	int a = 10;
//	return &a;//不要返回栈区地址  栈区在函数运行后会自动释放
//
//}
//int main()
//{
//
//	int* p = func();
//	cout << *p << endl;
//	//栈区在执行一次数据后 数据会自动释放  不要返回栈区地址
//	cout << *p << endl;//数据没了
//
//
//
//
//	system("pause");
//	return 0;
//
//}
