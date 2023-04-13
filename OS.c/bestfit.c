#include<stdio.h>
main()
{
	int n,fit,mem[10],frag,low=9999;
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
				if(low>frag)
				{
					low=frag;
					j=i;
				}
			
			}
		}
		printf("the bestfit is %d",mem[j]);
	}
	

