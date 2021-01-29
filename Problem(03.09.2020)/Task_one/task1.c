#include<stdio.h>
#include<signal.h>
#include<unistd.h>

void handle_alarm(int var)
{
	puts("Forbidden 403 \n");
	_Exit(0);
}

int main(int argc, char *argv[])
{
	unsigned int value = 0;
	printf("Enter an unsigned int value: ");
	scanf("%u", &value);
	signal(SIGALRM, handle_alarm);
	alarm(value);
	while(1) {}
	return 0;
}
