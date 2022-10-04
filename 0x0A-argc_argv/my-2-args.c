#include <stdio.h>

int main (int argc, char *argv[])
{
	int i;
	while(argc-- > 0)
	{
		printf("%s\n", argv[i]);
			i++;
	}

	return (0);
}

