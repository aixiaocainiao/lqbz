#include <iostream>
#include <string>
#include "workerManger.h"
#include "worker.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"
using namespace std;
int main()
{
	//���Դ���
	Worker* worker = NULL;
	worker = new Employee(1, "����", 1);
	worker->showInfo();
	delete worker;

	worker = new Manager(2, "����", 2);
	worker->showInfo();
	delete worker;

	worker = new Boss(3, "����", 3);
	worker->showInfo();
	delete worker;

	//չʾ�˵�
	WorkerManger wm;
	int chioce = 0;
	
	while (true)
	{
		//
		wm.Show_Menu();
		cout << "����������ѡ��: " << endl;
		cin >> chioce;
		switch (chioce)
		{
		case 0://�˳�ϵͳ
			wm.exitSystem();
			break;
		case 1://���ְ��

			break;
		case 2://��ʾְ��
			break;
		case 3://ɾ��ְ��
			break;
		case 4://�޸�ְ��
			break;
		
		case 5://����ְ��
			break;
		case 6://����ְ��
			break;
		case 7://���ְ��
			break;
		default:
			system("cls");
			break;




		}




	//}



	system("pause");
	return 0;
}