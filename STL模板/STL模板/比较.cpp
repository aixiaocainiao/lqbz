#include <iostream>
#include<string>
using namespace std;
//字符串比较
void test()
{
	//  int compare(const string & s) const; //与字符串s比较
	//• int compare(const char* s) const; //与字符串s比较
	string str1 = "hello";
	string str2 = "hello";
	if (str1.compare(str2) == 0)
	{
		cout << "str1 和 str2 相等" << endl;
	}
	else if(str1.compare(str2) > 0)
	{

		cout << "str1 大于 str2 " << endl;
	}
	else if (str1.compare(str2) < 0)
	{
		cout << "str1 小于 str2 " << endl;

	}
}
//字符存取
void test05()
{
	string str3 = "hello";
	//cout << str3 << endl;
	//1.通过[]访问单个字符
	for (int i = 0 ; i < str3.size(); i ++)
	{
		cout << str3[i] << " ";
	}
	cout << endl;
	//2.通过at方式访问单个字符
	for (int i = 0; i < str3.size(); i++)
	{
		cout << str3.at(i) << " ";
	}
	cout << endl;
	//修改单个字符
	str3[0] = 'x';
	cout << "str3 = " << str3 << endl;

	str3.at(2) = 'z';
	cout << "str3 = " << str3 << endl;

}
//字符串  插入和删除
void test02()
{
	//  string& insert(int pos, const char* s); //插入字符串
	//• string& insert(int pos, const string & str); //插入字符串
	//• string& insert(int pos, int n, char c); //在指定位置插入n个字符c
	//• string& erase(int pos, int n = npos); //删除从Pos开始的n个字符

	string str4 = "hello";
	cout << "str4 = " << str4 << endl;

	//1.插入
	str4.insert(1, "111");
	cout << "str4 = " << str4 << endl;

	//2.删除
	str4.erase(1, 3);
	cout << "str4 = " << str4 << endl;

}
//string子串
void test03()
{
	//string substr(int pos = 0, int n = npos) const; //返回由pos开始的n个字符组成
	//的字符串
	string str5 = "abcdef";
	str5.substr(1, 3);
	cout << "str5 = " << str5 << endl;
}
//实用操作
void test10()
{
	string email = "xiexinfang@qq.com";

	//从邮箱地址中  获取用户名信息

	int pos = email.find('@');
	string email1 = email.substr(0, pos);
	cout << "邮箱用户名为: " << email1 << endl;

}

int main()
{
	test();
	test05();
	test02();
	test03();
	test10();
	system("pause");
	return 0;
}
//字符串对比主要是用于比较两个字符串是否相等，判断谁大谁小的意义并不是很大
//总结：string字符串中单个字符存取有两种方式，利用 [ ] 或 at
//插入和删除的起始下标都是从0开始的
//子串  