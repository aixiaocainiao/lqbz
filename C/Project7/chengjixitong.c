#include <stdio.h>
#include <stdlib.h>

int main()
{
	    printf("��ӭʹ�ñ�ϵͳ\n");

		int a = -1;
		printf("�������ַ���");
		
		while(1)
		{
			    scanf_s("%d", &a);
				if (-1 == a)
				{
					break;
				}
				if (a < 0 || a > 100)
				{
					printf("�����ַ���Ч�����������룺");
					continue;

				}
				if (a >= 0 && a < 60)
				{
					printf("������\n");
				}
				else if (a >= 60 && a < 70)
				{
					printf("��\n");
				}
				else if (a >= 70 && a < 80)
				{
					printf("����\n");
				}
				else if (a >= 80 && a < 90)
				{
					printf("����\n");

				}
				else  
			    {
					printf("ţ��\n");
				}
				


			

		}
		printf("���������룬��лʹ�ñ�ϵͳ��\n");
    


	system("pause");
	return 0;
}