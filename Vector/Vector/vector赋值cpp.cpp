//#include <iostream>
//#include<string>
//#include <vector>
//using namespace std;
//void PrintVector(vector<int>& v)
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test()
//{
//	vector<int>v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//
//	}
//	PrintVector(v1);
//
//	//赋值 operator=
//	vector<int>v2;
//	v2 = v1;
//	PrintVector(v2);
//
//	//assign
//	vector<int>v3;
//	v3.assign(v2.begin(), v2.end());
//	PrintVector(v3);
//
//	//vector& operator=(const vector & vec);//重载等号操作符
//	//assign(beg, end); //将[beg, end)区间中的数据拷贝赋值给本身。
//	//assign(n, elem); //将n个elem拷贝赋值给本身。
//
//	vector<int>v4;
//	v4.assign(10, 100);
//	PrintVector(v4);
//
//}
//int main()
//{
//
//	test();
//	system("pause");
//	return 0;
//}