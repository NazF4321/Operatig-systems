#include<stdio.h>
main()
{
	int mem[10],fit,i,k,n,frag,high=0;
	printf("enter the no.of memory blocks:");
	scanf("%d",&n);
	printf("enter the memory size:");
	for(i=0;i<n;i++)
	scanf("%d",&mem[i]);
	printf("enter the size of process");
	scanf("%d",&fit);
	for(i=0;i<n;i++)
	{
		if(fit==mem[i])
		{
			if(high<frag)
			{
				high=frag;
				k=i;
			}
		}
	}
	printf("the worst fit is %d",mem[k]);
	
}
