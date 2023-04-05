#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i;
	i = 1;
	while (i <= 5)
	{
		printf("%d ", i);
		i++;


	}
	printf("\n");


	i = 1;
	do
	{
		printf("%d ", i);
		i++;

	} while (i <= 5);
	printf("\n");






	system("pause");
	return 0;
}