#include <iostream>
using namespace std;
#include "workerManager.h"
#include <string>
int main()
{
	//实例化管理者对象
	WorkerManager wm;
	
	//用来存储用户的选项
	int choice = 0;

	while (true)
	{

		//调用展示菜单菜单成员函数
		wm.Show_Menu();

		cout << "请输入您的选择: " << endl;
		cin >> choice;

		switch (choice)
		{
		case 0://退出系统 
			wm.ExitSystem();
			break;
		case 1://增加职工
			break;
		case 2://显示职工
			break;
		case 3://删除职工
			break;
		case 4://修改职工
			break;
		case 5://查找职工
			break;
		case 6://排序职工
			break;
		case 7://清空文档
			break;
		default:
			system("cls");//清屏操作
			break;
		}


	}

	system("pause");
	return 0;
}