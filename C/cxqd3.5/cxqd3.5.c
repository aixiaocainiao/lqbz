#include <stdio.h>
#include <stdlib.h>
int main()
{
	const int ROWS = 6;
	const int CHARS = 6;
	int row;
	int ch;
	for (row = 0; row < ROWS; row++)
	{
		for (ch = ('A' + row); ch < ('A' + CHARS); ch++)
		{
			printf("%c", ch);


		}
		printf("\n");






	}

	/*int 
	float

	while()
	for()*/




	system("pause");
	return 0;
}