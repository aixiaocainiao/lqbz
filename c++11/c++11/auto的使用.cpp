//#include <iostream>
//#include <vector>
////在c语言中 auto修饰的是局部变量  局部变量也叫auto变量 自动变量
///*
//	
//
//*/
//
//double foo()
//{
//
//	return 1.1;
//
//}
//
//struct Test
//{
//	int a;
//};
//void fun(std::vector<int>& tmp)
//{
//
//	for (auto i = tmp.begin(); i != tmp.end(); i++)
//	{
//
//
//
//	}
//
//}
////2.vs2013不支持 函数形参是auto变量,qt支持
////void func(auto a)
////{
////
////
////}
//
////3.auto变量不能作为自定义类型的成员变量
//struct MyStruct
//{
//	//auto i = 0;
//};
//int main()
//{
//	//1.定义变量时，必须初始化
//	/*auto a;
//	a = 10;*/
//
//	//auto b[3] = { 1,2,3 }; 不能是auto数组
//
//	//4.模板实例化 类型不能是auto
//	//std::vector<auto>c;
//
//	int a = 1;
//	auto b = 1;//b的类型就是int
//
//	Test str = { 0 };
//	auto d = str;//d的类型就是double
//
//	system("pause");
//	return 0;
//}