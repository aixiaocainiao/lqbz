//#include <iostream>
//#include<string>
//using namespace std;
////字符串查找和替换
//
////1.查找
//void test()
//{
//
//	//int find(const string & str, int pos = 0) const; //查找str第一次出现位置,
//	//从pos开始查找
//	//	• int find(const char* s, int pos = 0) const; //查找s第一次出现位置,从
//	//pos开始查找
//	//	• int find(const char* s, int pos, int n) const; //从pos位置查找s的前n个
//	//字符第一次位置
//	//	• int find(const char c, int pos = 0) const; //查找字符c第一次出现位
//	//置
//	//	• int rfind(const string & str, int pos = npos) const; //查找str最后一次位置,从
//	//pos开始查找
//	//	• int rfind(const char* s, int pos = npos) const; //查找s最后一次出现位置,
//	//从pos开始查找
//	//	• int rfind(const char* s, int pos, int n) const; //从pos查找s的前n个字符
//	//最后一次位置
//	//	• int rfind(const char c, int pos = 0) const; //查找字符c最后一次出现
//	//位置
//	//	• string& replace(int pos, int n, const string & str); //替换从pos开始n个字符
//	//为字符串str
//	//	• string& replace(int pos, int n, const char* s); //替换从pos开始的n个字
//	//符为字符串
//
//	string str1 = "abcdef";
//	int pos = str1.find("df");
//	if (pos == -1)
//	{
//		cout << "未找到字符串" << endl;
//
//	}
//	else
//	{
//		cout << "找到了字符串" << pos << endl;
//	}
//	//rfind 和 find 的区别
//	//rfing 从右往左查找  find从左为往右查找
//	pos = str1.rfind("de");
//	cout << "pos = " << pos << endl;
//}
////2.替换
//void test01()
//{
//
//	string str1 = "abcdef";
//	//从1号位置起 3个字符 替换为“1111”
//	str1.replace(1, 3, "1111");
//	cout << str1 << endl;
//}
//int main()
//{
//	//test();
//	test01();
//
//	system("pause");
//	return 0;
//}
////find 查找是从左往右，rfind 是从右往左
////find找到字符串后返回查找的第一个字符位置，找不到返回-1
////replace在替换时，要指定从那个位置起，多少个字符，替换成什么样的字符