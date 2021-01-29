#include<signal.h>
#include<unistd.h>

int flag;

void signalHandler(int signum)
{
	flag = 0;
}

void mysleep(unsigned int *sec)
{
	flag = 1;
        signal(SIGALRM, signalHandler);
        alarm(*sec);
        while(flag) 
	{}
}
