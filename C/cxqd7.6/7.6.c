#include <stdio.h>
#include <stdlib.h>
#include <iso646.h>
#define SPACE '.'
int main()
{
	char ch;
	int ncount = 0;
	ch = getchar();
	while (ch != SPACE)
	{
		if(ch !='"' and ch!= '\'')
			ncount++;


	}
	printf("There are %d non-quote characters.\n",ncount);


	system("pause");
	return 0;
}