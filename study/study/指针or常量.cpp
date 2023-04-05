//#include <iostream>
//#include <string>
//using namespace std;
////地址传递
//void swap(int *a,int *b)
//{
//	int temp = *a;
//	*b = *a;
//	*a = temp;
//
//
//}
//int main()
//{
//
//
//	
//	/*
//		const修饰指针有三种情况:
//			const修饰指针 常量指针
//			const修饰常量 指针常量
//			const即修饰常量 又修饰指针
//	
//	 
//	*/
//	string str = "hello_world";
//	int a = 10;
//	int b = 20;
//	//const修饰的是指针  指针指向可以改变 指针指向的值不可以改变
//	const int* p = &a;
//	p = &b;
//	cout << *p << endl;//正确的 指向可以改变的
//
//	//const 修饰的是常量 指针指向不可以改变 指针指向的值可以改变
//	int* const p1 = &b;
//	*p1 = 50;
//	//p1 = &a; 错误的
//	//const 即修饰指针 又修饰常量
//	const int* const p2 = &b;
//	/*p2 = &a;
//	*p2 = 12;*/
//	swap(&a,&b);
//	system("pause");
//	return 0;
//}