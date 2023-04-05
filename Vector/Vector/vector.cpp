//#include <iostream>
//#include<string>
//#include <vector>
//using namespace std;
////vector容器构造
//void PrintVector(vector<int>& v)
//{
//
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test()
//{
//	//• vector<T> v; //采用模板实现类实现，默认构造函数
//	//• vector(v.begin(), v.end()); //将v[begin(), end())区间中的元素拷贝给本身。
//	//• vector(n, elem); //构造函数将n个elem拷贝给本身。
//	//• vector(const vector & vec); //拷贝构造函数。
//	
//	vector<int>v;//默认构造 无参构造
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//	PrintVector(v);
//
//	//通过区间方式进行构造
//	vector<int>v1(v.begin(), v.end());
//	PrintVector(v1);
//
//	//n个elem方式构造
//	vector<int>v2(10, 100);
//	PrintVector(v2);
//
//	//拷贝构造
//	vector<int>v3(v2);
//	PrintVector(v3);
//}
//int main()
//{
//	test();
//
//	system("pause");
//	return 0;
//}
////vector的多种构造方式没有可比性，灵活使用即可