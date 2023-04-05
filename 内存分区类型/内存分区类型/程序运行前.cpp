//#include <iostream>
//#include <string>
//using namespace std;
////全局变量
//int g_a = 10;
//int g_b = 20;
////全局常量
//const int c_g_a = 10;
//const int c_g_b = 20;
//int main()
//{
//	//局部变量
//	int a = 10;
//	int b = 20;
//	cout << "局部变量a的地址: " << (int)&a << endl;
//	cout << "局部变量b的地址: " << (int)&b << endl;
//
//	//全局变量
//	cout << "全局变量g_a的地址: " << (int)&g_a << endl;
//	cout << "全局变量g_b的地址: " << (int)&g_b << endl;
//	//静态变量  加上static 就变成了静态常量
//	static int s_a = 10;
//	static int s_b = 20;
//	cout << "静态变量s_a的地址: " << (int)&s_a << endl;
//	cout << "静态变量s_b的地址: " << (int)&s_b << endl;
//
//	cout << "字符串常量地址" << (int)&"helo,world" << endl;
//	cout << "字符串常量地址" << (int)&"world" << endl;
//	//全局常量
//	cout << "全局常量c_g_a的地址: " << (int)&c_g_a << endl;
//	cout << "全局常量c_g_b的地址: " << (int)&c_g_b << endl;
//
//	//局部常量
//	const int c_l_a = 10;
//	const int c_l_b = 20;
//	cout << "局部常量c_l_a的地址: " << (int)&c_l_a << endl;
//	cout << "局部常量c_l_b的地址: " << (int)&c_l_b << endl;
//
//	system("pause");
//	return 0;
//}