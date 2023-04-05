////堆区
////由程序员分配释放 若程序员不释放 程序在结束时由操作系统自动回收
////在C++中主要利用new在堆区开辟内存
//#include <iostream>
//#include <string>
//using namespace std;
//int* func()
//{
//	//利用new关键字 可以将数据开辟到堆区
//	//指针 本质上也是局部变量 放在栈上，指针保存的数据是放在堆上
//	int *a= new int(10);//new int(10)返回的是一个地址
//	return a;//a是一个地址
//
//}
//int main()
//{
//
//	int* p = func();
//	cout << *p << endl;
//	cout << *p << endl;
//	cout << *p << endl;
//	cout << *p << endl;
//	cout << *p << endl;
//
//	delete p;//利用delete来释放堆区数据
//	//已经释放的内存打印会出现错误
//	/*cout << *p << endl;*/
//
//	system("pause");
//	return 0;
//
//}