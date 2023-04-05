////nullptr只能给指针赋值
//#include <iostream>
//using namespace std;
//void func(int a)
//{
//
//	cout << __LINE__ << endl;
//
//}
////重载
//void func(int* a)
//{
//
//	cout << __LINE__ << endl;
//
//}
//int main()
//{
//	int* p = NULL;
//	int* p1 = 0;//这两个一样的
//
//	func(0);//不明确的
//	func(NULL);//不明确的
//
//	//nullptr只能给指针赋值
//	func(nullptr);//
//	int p = NULL;
//	int* p1 = 0;
//	 p1 = nullptr;
//	 if (p == p1)
//	 {
//		 cout << "一样" << endl;
//	 }
//	 //int p2 = nullptr; 错误 nullptr不能给一个普通整形变量
//
//	system("pause");
//	return 0;
//}