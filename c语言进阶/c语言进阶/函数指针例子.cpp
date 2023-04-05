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
	int input;//根据菜单提示输入操作符
	int x = 0;
	int y = 0;
	int (*pArr[])(int, int) = { 0,Add,Sub,Mul,Div };
	do
	{
		cal_menu();
		printf("请输入操作符:>>\n");
		scanf("%d ", &input);
		
		switch (input)
		{

		
			case 1:
			case 2:
			case 3:
			case 4:
				printf("请依次输入两个数字:\n");
				scanf(" %d %d ", &x, &y);
				printf("%d", (*pArr[input])(x, y));
				break;
			case 0:
				printf("退出 !\n");
				break;

			default:
				printf("选择错误 \n");
				break;
		}
		



	} while (input);
	

	return 0;
}
