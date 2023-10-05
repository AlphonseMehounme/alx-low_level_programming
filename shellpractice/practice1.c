#include <stdio.h>
#include <unistd.h>

int main(void)
{
	pid_t mypid;
	pid_t myppid;

	mypid = getpid();
	myppid = getppid();
	printf("%u\n", mypid);
	printf("%u\n", myppid);
	return (0);
}
