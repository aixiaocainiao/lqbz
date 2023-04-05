#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
#define PAR 72
int main(void)
{
	int sum = 0;
	int index;
	int score[SIZE];
	float average;
	for (index = 0; index < SIZE; index++)
	{
		scanf_s("%d",& score[index]);

	}
	printf("The score read in are as follow\n");
	for (index = 0; index < SIZE; index++)
	{
		printf("%d",score[index]);

	}
	for (index = 0; index < SIZE; index++)
	{
		sum += score[index];
		
	}
	average =(float) sum / PAR;
	printf("sum of score = %d,average of score = %f \n", sum, average);
	printf("That's a handicap of %f.\n", average - PAR);









	system("pause");
	return 0;
}