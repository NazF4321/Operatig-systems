#include<stdio.h>
main()
{
	int bt[10],wt[10],tat[10],t[10],n,tq,i;
	int count=0,swt=0,stat=0,temp,sq=0;
	float awt,atat;
	printf("\n enter the no.of.process");
	scanf("%d",&n);
	printf("\n enter the bursttime");
	for(i=0;i<n;i++)
	{
		scanf("%d",&bt[i]);
		t[i]=bt[i];
	}
	printf("\n enter the time quantum");
	scanf("%d",&tq);
	while(1)
	{
		for(i=0;i<n;i++)
		{
			temp=tq;
			if(t[i]==0)
			{
				count++;
				continue;
			}
			if(t[i]>tq)
			t[i]=t[i]-tq;
			else
			if(t[i]>=0)
			{
				temp=t[i];
				t[i]=0;
			}
			sq=sq+temp;
			tat[i]=sq;
		}
		if(n<=count)
		break;
	}
	for(i=0;i<n;i++)
	{
		wt[i]=tat[i]-bt[i];
		swt=swt=wt[i];
		stat=stat=tat[i];
		}	
		awt=(float)swt/n;
		atat=(float)stat/n;
		printf("\n\n process details");
		printf("\n\n process number \tbursttime\t waiting time \t turnaround time");
	    for(i=0;i<n;i++)
	    {
	    	printf("\n%d\t\t%d\t\t%d\t\t%d",i+1,bt[i],wt[i],tat[i]);
		}
		printf("\n average waiting time is %f",awt);
		printf("\n average turnaroundtime is %f",atat);
}
