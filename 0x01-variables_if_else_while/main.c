#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i;
	int j;

	for(i = 0; i < 10; i++)
	{
		for(j = 0; j < 10; j++)
		{
			if(j != i )
			{
				printf(i, j);
			}
		}
	}
	return(0);
}
