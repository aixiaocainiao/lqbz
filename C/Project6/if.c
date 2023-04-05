#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a = 67;
	if (a < 60)
	{
		printf("不及格\n");


	}
	else if (a >= 60 && a < 80)
	{

		printf("良好\n");


	}
	else if(a >= 80 && a < 90)
	{
	    
		printf("好\n");


     }
	else
	{

	printf("优秀\n");
    }



	system("pause");
	return 0;
}