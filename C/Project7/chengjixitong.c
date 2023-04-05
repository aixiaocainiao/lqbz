#include <stdio.h>
#include <stdlib.h>

int main()
{
	    printf("欢迎使用本系统\n");

		int a = -1;
		printf("请输入字符；");
		
		while(1)
		{
			    scanf_s("%d", &a);
				if (-1 == a)
				{
					break;
				}
				if (a < 0 || a > 100)
				{
					printf("输入字符无效，请重新输入：");
					continue;

				}
				if (a >= 0 && a < 60)
				{
					printf("不及格\n");
				}
				else if (a >= 60 && a < 70)
				{
					printf("良\n");
				}
				else if (a >= 70 && a < 80)
				{
					printf("良好\n");
				}
				else if (a >= 80 && a < 90)
				{
					printf("优秀\n");

				}
				else  
			    {
					printf("牛逼\n");
				}
				


			

		}
		printf("请重新输入，感谢使用本系统：\n");
    


	system("pause");
	return 0;
}