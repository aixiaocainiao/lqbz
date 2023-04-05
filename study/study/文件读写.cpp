#include <iostream>
#include <fstream>//读写操作

using namespace std;
//写
void test()
{
	//创建流对象
	fstream ofs;
	//打开文件
	ofs.open("test.txt", ios::out);
	//写数据
	ofs << "你好呀" << endl;
	ofs << "你好呀" << endl;
	ofs << "你好呀" << endl;



	ofs.close();


}
//读
void test01()
{
	fstream ifs;
	ifs.open("test.txt",ios::in);
	if (!ifs.is_open())
	{

		cout << "文件打开失败" << endl;
		return;

	}
	//第一种方式
	//char buf[1024] = { 0 };
	//while (ifs >> buf)
	//{
	//	cout << buf << endl;
	//}

	//第二种
	//char buf[1024] = { 0 };
	//while (ifs.getline(buf,sizeof(buf)))
	//{
	//	cout << buf << endl;
	//}

	//第三种
	//string buf;
	//while (getline(ifs, buf))
	//{
	//	cout << buf << endl;
	//}
	char ch;
	while (ch = ifs.get() != EOF)
	{
		cout << ch;
	}
	ifs.close();


}
int main()
{

	test();

	system("pause");
	return 0;
}
//- 读文件可以利用 ifstream  ，或者fstream类
//- 利用is_open函数可以判断文件是否打开成功
//- close 关闭文件

