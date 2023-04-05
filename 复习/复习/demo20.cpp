//#include <iostream>
//using namespace std;
//class Myprint {
//public:
//	void operator()(string test) {
//		cout << test << endl;
//	}
//
//
//};
//void myPrint(string test) {
//	cout << test << endl;
//
//}
//void test() {
//	Myprint myprint;
//	myprint("helloworld");//由于使用起来非常类似于函数调用，因此被称为仿函数
//	myPrint("helloworld");
//}
////仿函数非常灵活，没有固定的写法
////加法类
//class MyAdd {
//public:
//	int operator()(int num1,int num2) {
//		return num1 + num2;
//
//	}
//
//};
//void test01() {
//	MyAdd myadd;
//	int p1 = myadd(10, 12);
//	cout << "p1= " << p1 << endl;
//	//匿名函数对象
//	//重点看一下
//	cout << MyAdd()(10, 12);
//}
//int main()
//{
//
//	test01();
//
//	//test();
//
//
//	system("pause");
//	return 0;
//}