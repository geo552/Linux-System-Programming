#include<stdio.h>
#include<signal.h>
#include<unistd.h>

void mysleep(unsigned int *sec);

int main(int argc, char *argv[])
{
	unsigned int value = 0;
        printf("Enter an unsigned int value: ");
        scanf("%u", &value);
	mysleep(&value);
	printf("403 Forbidden\n");
	return 0;
}
