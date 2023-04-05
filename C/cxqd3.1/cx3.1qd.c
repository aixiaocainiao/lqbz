#include <stdio.h>
int main()
{
	float weight;
	double  value;
	printf("Are you worth your weight in platinum?\n");
	printf("Let's check it out\n");
	printf("please enter your weight in pounds:\n");
	getchar();
	scanf_s("%f", &weight);
	value = 1700.0 * weight * 14.5833;
	printf("Your weight in platinum is worth $ %.2f\n", value);
	
	






	return 0;
}

