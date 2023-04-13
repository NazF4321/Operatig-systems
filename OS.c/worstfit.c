#include<stdio.h>
#include<stdio.h>
main()
{
	int n,fit,mem[10],high,k,frag,low=9999;
	int i,j;
	printf("enter total no.of.memory block");
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
				frag=mem[i]-fit;
				if(high<frag)
				{
					high=frag;
					k=i;
				}
			}
		}
		printf("the worst fit %d",mem[k]);
	}
