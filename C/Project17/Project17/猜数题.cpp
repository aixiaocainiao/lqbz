/*#include <iostream>
//time 系统时间头文件
#include <ctime>
using namespace std;
int main()
{

	//添加随机数种子
	srand((unsigned int)time(NULL));



	// 系统随机生成随机数
	int name1 = rand()%100 + 1 ;//系统随机输入1-100的数字
	//cout << "name1 = " << name1 << endl;
	//int name2 = rand() % 100 + 1;//系统随机输入1-100的数字
	//cout << "name1 = " << name2 << endl;
	//int name3 = rand() % 100 + 1;//系统随机输入1-100的数字
	//cout << "name1 = " << name3 << endl;
	int name2 = 0;
	cout << "请用户输入一个数字进行猜测：" ;
	

	while (1)
	{
		cin >> name2;

		if (name2 > name1)
		{
			cout << "玩家输入值过大 " << endl;
			
			 
		}

		else if (name2 < name1)
		{
			cout << "玩家输入值偏小 " << endl;

		}
		else
		{

			cout << "恭喜玩家胜利，输入正确！" << endl;
			break;
		}

		

	}
	




	system("pause");
	return 0;



}
*/