//#include <iostream>
//using namespace std;
//void swap(int* a, int* b)
//{
//	int temp = 0;
//	temp = *a;
//	*a = *b;
//	*b = temp;
//
//
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//const修饰的是指针，指针指向可以改，指针指向的值不能改变
//	const int* p = &a;
//	p = &b;
//	//const修饰的是常量，指针指向不可以更改，指针指向的值可以改变
//	int* const p1 = &a;
//	*p1 = 50;//a的值已经发生了改变
//	//const 即修饰常量又修饰指针
//	const int* const p2 = &a;
//	//都不能更改
//	int ary[] = { 1,2,3,4,5,6,7 };
//	int* p3 = ary;
//	cout << "第一个元素" << ary[0] << endl;
//	cout << "指针指向第一个元素" << *p3 << endl;
//	for (int i = 0; i < 7; i++)
//	{
//
//		cout << *p3 << endl;
//		p3++;
//
//
//	}
//
//	swap(&a, &b);
//	cout << a << endl;
//	cout << b << endl;
//
//	system("pause");
//	return 0;
//}