//#include <iostream>
//#include <cassert>//静态断言的头文件
//using namespace std;
//int main()
//{
//	//static_assert(常量表达式条件,"提示的字符")
//
//	static_assert(sizeof(void*) == 4, "64位系统不支持");//没听懂这个提示字符有啥用
//
//	cout << "helloworld" << endl;
//
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	bool flag = false;
//	//运行时，检查条件 如果条件为真 往下执行 如果条件为假，中断，提示错误
//	//assert(flag == true);条件为假，中断
//	assert(flag == false);//条件为真 往下执行
//
//
//	cout << "helloworld" << endl;
//
//
//	system("pause");
//	return 0;
//}