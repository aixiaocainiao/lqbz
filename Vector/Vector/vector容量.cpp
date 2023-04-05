//#include <iostream>
//#include<string>
//#include <vector>
//using namespace std;
//void printvector(vector<int>& v)
//{
//
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//
//
//	}
//	cout << endl;
//}
//void test()
//{
//	//empty(); //判断容器是否为空
//	//capacity(); //容器的容量
//	//size(); //返回容器中元素的个数
//	//resize(int num); //重新指定容器的长度为num，若容器变长，则以默认值填充新位
//	//置。​ //如果容器变短，则末尾超出容器长度的元素被删除。
//	//resize(int num, elem); //重新指定容器的长度为num，若容器变长，则以elem值填充新
//	//位置。​ //如果容器变短，则末尾超出容器长度的元素被删除
//
//	vector<int>v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	printvector(v1);
//
//	if (v1.empty())//为真 代表容器为空
//	{
//		cout << "容器为空" << endl;
//	}
//	else
//	{
//		cout << "容器不为空: " << endl;
//		cout << "容器容量为: " << v1.capacity() << endl;
//		cout << "容器中的个数 " << v1.size() << endl;
//	}
//
//	//重新指定大小
//	v1.resize(15);
//	printvector(v1);
//
//	v1.resize(15, 100);//；利用重载版本，可以指定默认填充值，参数2
//	printvector(v1);//如果重新指定的比原来的长了，默认用0填充新的位置
//
//	v1.resize(10);
//	printvector(v1);//如果重新指定的比原来的短了，超出部分会被删除掉
//}
//int main()
//{
//
//	test();
//	system("pause");
//	return 0;
//}
////• 判断是否为空 — empty
////• 返回元素个数 — size
////• 返回容器容量 — capacity
////• 重新指定大小 — resize