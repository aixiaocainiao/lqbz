//#include <iostream>
//
//int func1(int a, int b)
//{
//
//	return a + b;
//
//
//}
//auto func2(int a, int b)->int
//{
//
//	return a + b;
//
//
//}
//auto func2(int a, double b)->decltype(a+b)
//{
//
//	return a + b;
//
//}
//template<class T1,class T2>
//auto Mul(const T1& t1,const T2& t2)->decltype(t1*t2)//在未知的条件下根据运算来自动类型推导
//{
//	//const T1& t1  只用不改变
//	return t1 * t2;
//
//}
//int main()
//{
//	int a = 10;
//	double b = 11.2;
//	auto c = func2(a, b);
//	std::cout << "c = " << c << std::endl;
//
//	auto i = 10;
//	auto j = 11.2;
//	auto d = Mul(i, j);
//	std::cout << "d = " << d << std::endl;
//	system("pause");
//	return 0;
//}