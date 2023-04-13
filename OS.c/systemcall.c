#include<stdio.h>
#include<syslwait.h>
int main()
{
	int P1,P2;
	P1=fork();
	if(P1==-1)
	{
		print("error");
		return 0;
	}
	else
	{
		printf("parent is %d \n",getppid());
		printf("child is %d \n",getpid());
	}
	P2=fork();
		printf("parent is %d \n",getppid());
		printf("child is %d \n",getpid());
}
