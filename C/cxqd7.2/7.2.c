#include <stdio.h>
#include <stdlib.h>
int main()
{
	int legs;
	printf("please input a number.\n");
	printf("enter a character to quit.\n");
	printf("number :");
	
	while (scanf_s("%d ", &legs) == 1)
	{

		if (legs == 4)
			printf("It may be a horse.\n");
		else if (legs > 4)
			printf("It is not a horse.\n");
		else
		{
			legs++;
			printf("Now it has one more leg.\n");


		}
	}


	
	





	system("pause");
	return 0;





	
}