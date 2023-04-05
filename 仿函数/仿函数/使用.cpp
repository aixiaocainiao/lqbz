//函数对象(仿函数)是一个类，不是一个函数
//匿名函数对象  一会自己看看
#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
#include <string>
/*
	函数对象在使用时，可以像普通函数那样调用, 可以有参数，可以有返回值
	函数对象超出普通函数的概念，函数对象可以有自己的状态
	函数对象可以作为参数传递


*/
//函数对象在使用时，可以像普通函数那样调用, 可以有参数，可以有返回值
class Myadd {
public:
	int operator()(int v1, int v2)
	{
		return v1 + v2;

	}


};
//函数对象在使用时，可以像普通函数那样调用, 可以有参数，可以有返回值
void test()
{
	Myadd myadd;
	cout << myadd(10, 10) << endl;


}
//函数对象超出普通函数的概念，函数对象可以有自己的状态
class Myprint
{
public:
	Myprint()
	{
		this->count = 0;

	}
	void operator()(string test)
	{
		cout << test << endl;
		count++;
	}

public:
	int count;
};
//函数对象超出普通函数的概念，函数对象可以有自己的状态
void test02()
{
	Myprint myprint;
	myprint("hello world");
	myprint("hello world");
	myprint("hello world");
	myprint("hello world");
	cout << "myprint调用次数为 : " << myprint.count << endl;

}
//函数对象可以作为参数传递
void doPrint(Myprint &myprint,string test)
{

	myprint(test);//转到了40行 相当于函数使用

}
void test03()
{
	Myprint myprint;
	doPrint(myprint,"hello C++");

}
/*
	返回bool类型的仿函数称为谓词
	如果operator()接受一个参数，那么叫做一元谓词
	如果operator()接受两个参数，那么叫做二元谓词


*/
//一元谓词
class GreateFive
{
public:
	bool operator()(int val)
	{
		return val > 5;


	}


};
void test04()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{

		v.push_back(i);

	}
	//查找容器中，有没有大于5的数字
	// GreateFive()匿名函数对象
	vector<int>::iterator it = find_if(v.begin(), v.end(), GreateFive());

	if (it == v.end())
	{
		cout << "未找到大于5的数字"  << endl;
	}
	else
	{
		cout << "找到了大于5的数字 ：它是：" << *it << endl;
	}
}
//二元谓词
class Mycompare
{
public:
	bool operator()(int val1,int val2)
	{


		return val1 > val2;
	}

};
void test05()
{
	vector<int>v1;
	v1.push_back(10);
	v1.push_back(50);
	v1.push_back(20);
	v1.push_back(40);
	v1.push_back(30);
	//排序前
	cout << "-----------------------------------------" << endl;
	for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
	{

		cout << *it << " ";
		

	}
	cout << endl;
	//从大到小排序后
	cout << "-----------------------------------------" << endl;
	sort(v1.begin(), v1.end());
	for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
	{

		cout << *it << " ";
	

	}
	sort(v1.begin(),v1.end(),Mycompare());
	//从小到大排序后
	cout << "-----------------------------------------" << endl;
	for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
	{

		cout << *it << " ";
		

	}
	cout << endl;
}
int main()
{

	test();
	test02();
	test03();
	test04();
	test05();
	system("pause");
	return 0;
}