#include<stdio.h>
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
int main()
{
	int input;//���ݲ˵���ʾ���������
	int x = 0;
	int y = 0;
	int (*pArr[])(int, int) = { 0,Add,Sub,Mul,Div };
	do
	{
		cal_menu();
		printf("�����������:>>\n");
		scanf("%d ", &input);
		
		switch (input)
		{

		
			case 1:
			case 2:
			case 3:
			case 4:
				printf("������������������:\n");
				scanf(" %d %d ", &x, &y);
				printf("%d", (*pArr[input])(x, y));
				break;
			case 0:
				printf("�˳� !\n");
				break;

			default:
				printf("ѡ����� \n");
				break;
		}
		



	} while (input);
	

	return 0;
}
