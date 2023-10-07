#include <stdio.h>

int main(int ac, char **av)
{
	int i = 1;
	while(av[i] != NULL)
	{
		printf("%s\n", av[i]);
		i++;
	}
	return (0);
}
