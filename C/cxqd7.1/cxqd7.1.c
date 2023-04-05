#include <stdio.h>
#include <stdlib.h>
#define FREEZING 0
int main(void)
{

	int cold_day = 0;
	int all_day = 0;
	float temperature;
	

	printf("Enter the list of daily low temperature.\n");
	printf("Use Celsius ,and enter q to quit.\n");
	
	while (scanf_s("%f ", &temperature) == 1)
	{
		all_day++;

		if (temperature < FREEZING)
			cold_day++;

	}
	if (all_day != 0)
	{
		printf(" %d days total : % .1f %% were below frezing.\n", all_day, 100.0 * (float)cold_day / all_day);

	}
	if (all_day == 0)
	{
		printf("no data enter.\n");
	}
	system("pause");

	return 0;
}