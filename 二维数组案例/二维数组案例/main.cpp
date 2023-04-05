//#include <iostream>
//using namespace std;
//int main()
//{
//	//案例分析 三人三门成绩 打印每个人的分数和
//	int arry[3][3] = { {100,100,100},{70,90,100},{60,80,45}
//
//	};
//
//
//
//
//
//
//
//	system("pause");
//	return 0;
//}
#include <iostream>
#include <string>
using namespace std;
int main() {

	int scores[3][3] =
	{
		{100,100,100},
		{90,50,100},
		{60,70,80},
	};

	string names[3] = { "张三","李四","王五" };

	for (int i = 0; i < 3; i++)
	{
		int sum = 0;
		for (int j = 0; j < 3; j++)
		{
			sum += scores[i][j];
		}
		cout << names[i] << "同学总成绩为： " << sum << endl;
	}

	system("pause");

	return 0;
}