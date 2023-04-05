#include <iostream>
#include<string>
#include <vector>
using namespace std;
void printvector(vector<int>& v)
{

	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";


	}
	cout << endl;
}
void test()
{
	//函数原型：
	//• at(int idx); //返回索引idx所指的数据
	//• operator[]; //返回索引idx所指的数据
	//• front(); //返回容器中第一个数据元素
	//• back(); //返回容器中最后一个数据元素
	vector<int>v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	printvector(v1);

	vector<int>v2;

	for (int i = 0; i < 10; i++)
	{
		v2.push_back(i);
	}
	printvector(v2);

	v1.swap(v2);
	printvector(v1);
	printvector(v2);
}
void test01()
{
	//预留空间
	vector<int>v;
	//v.reserve(1000);
	int* p = NULL;
	int num = 0;
	for (int i = 0; i < 1000; i++)
	{

		v.push_back(i);
		if (p != &v.at(0))
		{
			p = &v.at(0);
			num++;
		}

	}
	cout << "num = " << num << endl;
	cout << "容器容量为: " << v.capacity() << endl;
	cout << "元素个数为: " << v.size() << endl;

	v.resize(3);
	cout << "容器容量为: " << v.capacity() << endl;
	cout << "元素个数为: " << v.size() << endl;

	//收缩内存  很重要
	vector<int>(v).swap(v);

	cout << "容器容量为: " << v.capacity() << endl;
	cout << "元素个数为: " << v.size() << endl;

}
int main()
{
	//test();
	test01();
	system("pause");
	return 0;
}