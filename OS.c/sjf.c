#include<stdio.h>
struct sjf
{
	int pno,btime;
};
main()
{
	int n,i,j,wait,ptemp,btemp,a,pno,btime;
	
	float avg1,avg2,wt,ta;
	struct sjf s[10];
	printf("\n\n sjf algorithm \n\n");
	printf("*******");
	printf("\n enter the no.of.process:\n");
	scanf("%d",&n);
	btemp=ptemp=wait=avg1=avg2=a=0;
	for(i=0;i<n;i++)
	{
		
			printf("\n enter the burst time");
			scanf("%d",&s[i].btime);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(s[i].btime > s[j].btime)
			{
				btemp=s[i].btime;
				ptemp=s[i].pno;
				s[i].btime=s[j].btime;
				s[j].btime=btemp;
				s[i].pno=s[j].pno;
				s[j].pno=ptemp;
	
			}
		}
	}
	printf("\n\n the process details");
	printf("\n process number \t bursttime \twaiting time \tturnaround time");
	for(i=0;i<n;i++)
	{
		printf("\n\t%d\t\t%d",s[i].pno,s[i].btime);
		printf("\t%d\t\t%d",wait,wait+s[i].btime);
		avg1=avg1+wait;
		avg2=avg2+wait+s[i].btime;
		wait=wait+s[i].btime;
	}
	printf("\n\n gantt chart \n\n");
	printf("\n______________");
	printf("%d\t\t",a);
	for(i=0;i<n;i++)
	{
		a=a+s[i].btime;
		printf("%d\t\t",a);
	}
	printf("\n_________");
	wt=avg1/n;
	ta=avg2/n;
	printf("\n average waiting time is %f",wt);
	printf("\n \n average turnaround time is:%f",ta);
	}

