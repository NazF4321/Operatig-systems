#include<stdio.h>
main()
{
	int mem[10],fit,n,i;
	printf("enter no.of memory block");
	scanf("%d",&n);
	printf("enter the memory size");
	for(i=0;i<n;i++)
	scanf("%d",&mem[i]);
	printf("enter the size of process");
	scanf("%d",&fit);
	for(i=0;i<n;i++)
	{
		if(fit<=mem[i])
		{
			printf("the first fit is:%d",mem[i]);
			break;
		}
	}
}
