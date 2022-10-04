#include <stdio.h>


int main(int argc, char const *argv[])
{
	(void)argv;
	int i , count = 0;
	for(i=0; i<argc; i++)
	{
		count +=1;
	};

	printf("%d\n", count - 1);
	return 0;
}
