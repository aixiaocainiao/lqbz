/*#include <iostream>
//time ϵͳʱ��ͷ�ļ�
#include <ctime>
using namespace std;
int main()
{

	//������������
	srand((unsigned int)time(NULL));



	// ϵͳ������������
	int name1 = rand()%100 + 1 ;//ϵͳ�������1-100������
	//cout << "name1 = " << name1 << endl;
	//int name2 = rand() % 100 + 1;//ϵͳ�������1-100������
	//cout << "name1 = " << name2 << endl;
	//int name3 = rand() % 100 + 1;//ϵͳ�������1-100������
	//cout << "name1 = " << name3 << endl;
	int name2 = 0;
	cout << "���û�����һ�����ֽ��в²⣺" ;
	

	while (1)
	{
		cin >> name2;

		if (name2 > name1)
		{
			cout << "�������ֵ���� " << endl;
			
			 
		}

		else if (name2 < name1)
		{
			cout << "�������ֵƫС " << endl;

		}
		else
		{

			cout << "��ϲ���ʤ����������ȷ��" << endl;
			break;
		}

		

	}
	




	system("pause");
	return 0;



}
*/