//#include <iostream>
//using namespace std;
////返回局部变量引用
//int& test01()
//{
//	static int a = 10;//局部变量 存放在堆中，只能使用一次
//	return a;
//
//}
//int& test02()
//{
//	static int a = 10;
//	return a;
//
//}
//int main()
//{
//	int& ref = test01();
//	cout << "ref的值为: " << ref << endl;
//	//cout << "ref的值为: " << ref << endl;//输出的值不对的
//
//
//	int& ref1 = test02();
//
//	test02() = 20;
//	cout << "ref1的值为: " << ref1 << endl;
//
//
//
//	system("pause");
//	return 0;
//}