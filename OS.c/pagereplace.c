#include<stdio.h>
int n,nf;
int in[100];
int hit = 0;
int i,j,k;
int page fault cnt=0;
void get data()
{
	printf("\n enter the length of page reference sequence");
	scanf("%d",&n);
	printf("\n enter the page reference sequence");
	for(i=0;i<n;i++)
	scanf("%d",&in[i]);
	printf("\n enter no.of.frames");
	scanf("%d"&nf);
}
 void initialize()
 {
 	pg fault cnt=0;
 	for(i=0;i<nf;i++)
 	p[i]=9999;
 }
 int isHit(int data)
 {
 	hit=0;
 	for(j=0;j<nf;j++)
 	{
 		if (p[i]==data)
 		{
 			hit=1;
 			break;
		 }
	 }
	 return hit;
 }
 int getHitIndex(int data)
  { 
 	int hitind;
 	for(k=0;k<nf;k++)
 	{
 		hitind=k;
 		break;
	 }
  }
  return hitind;
}
void dispPages()
{
	for(k=0;k<nf;k++)
	{
		if(p[k]!=9999)
		printf("%d",p[k]);
	}
 } 
 void disp PgFaultcnt()
 {
 	printf("\n total no.of.page faults :%d",pgfaultcnt);
 }
 void fifo()
 {
 	initialize():
 		for(i=0;i<n;i++)
 		{
 			printf("\n For %d:",in[i]);
 			if(isHit(int [i])==0)
 			{
 				for(k=0;k<nf-1;k++)
 				p[k]=p[k+1];
 				p[k]=in[i];
 				pgfaultcnt++;
 				dispPages();
			 }
			 else
			 printf("No Page fault");
		}
		dispPgFaultcnt();
 }
 void optimal()
 {
 	initialize();
 	int near[50];
 	for(i=0;i<n;i++)
 	{
 		printf("\n For %d :",int[i]);
 		if(isHit(int[i]==0)
 		{
 			for(j=0;j<nf;j++)
            {
            	int pg=p[j];
            	int found=0;
            	for(k=i;k<n;k++)
            	{
            		if(pg==in[k])
            		{
            			near[j]=k;
            			found=1;
            			break;
					}
					else
					  found=0;
				}
				if(!found)
				near[j]=9999;
			}
			int max=-9999;
			int repindex;
			for(j=0;j<nf;j++)
			{
				max=near[j];
				repindex;
				for(j=0;j<nf;j++)
				{
					max=near[j];
					repindex=j;
				}
			}
			p[repindex]=in[i];
			pgfaultcnt++;
			dispPages();
		 }
		 else
		 print("No Page fault");
	 }
	 dispPgFaultcnt();
 }
 void lru()
 {
 	initialize();
 	int least[50];
 	for(i=0;i<n;i++)
 	{
 		printf("\n For %d :",in[i]);
 		if(isHit(int[i])==0)
 		{
 			for(j=0;j<nf;j++)
 			{
 				int Pg=p[j];
 				int found=0;
 				for(k=i-1;k>=0;k--)
 				{
 					if(pg==in[k])
 					{
 						least[j]=k;
 						found=1;
 						break;
					 }
					 else
					   found=0;
				 }
				 if(!found)
				 least[j]=-9999;
			 }
			 int min=9999;
			 int repindex;
			 for(j=0;j<nf;j++)
			 {
			 	if(least[j]<min)
			 	{
			 		min=least[j];
			 		repindex=j;
				}
			 }
			 p[repindex]=in[i];
			 pgfaultcnt++;
			 dispPages();
		 }
		 else
		 printf("No Pges fault!");
	}
	dispPagFaultcnt();
 }
 
