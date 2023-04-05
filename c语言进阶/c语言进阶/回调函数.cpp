#include <stdio.h>
#include <stdlib.h>
void cal_menu()
{
	printf("*****************************\n");
	printf("*****   1.Add     2.Sub  ****\n");
	printf("*****   3.Mul     4.Div  ****\n");
	printf("******    0.exit     ********\n");
	printf("*****************************\n");
}
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}
void Calc(int (*func)(int, int))
{
	int x = 0;
	int y = 0;
	printf("������������������:\n");
	scanf(" %d %d ", &x, &y);
	//�ص�����
	printf(" %d ", func(x, y));
	


}
int main()
{
	int input;//���ݲ˵���ʾ���������

	do
	{
		cal_menu();
		printf("��ѡ�������:>>\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			Calc(Add);
			break;
		case 2:
			Calc(Sub);
			break;
		case 3:
			Calc(Mul);
			break;
		case 4:
			Calc(Div);
			break;
		case 0:
			printf("�˳�!\n");
			break;
		default:
			printf("ѡ�����!\n");
			break;
		}
	} while (input);
	return 0;
}
