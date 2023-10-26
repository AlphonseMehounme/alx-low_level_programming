#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int i, n;
	time_t t;

	srand(time(NULL));
	for (i = 0; i < 5; i++)
	{
		n = rand();
		printf("%c\n", n);
	}
	return(0);
}
