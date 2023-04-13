#include<stdio.h>
struct ps
{
	int pno;
	int btime;
}
   main()
  {
	int n,p,i,wait;
	float avg,avg1,avg2;
	struct ps f[20];
	printf("/n enter the no.of.processes:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n enter the process no:");
		scanf("%d",&f[i].pno);
		printf("\n enter the burst time:");
		scanf("%d",&f[i].btime);
	}
	printf("\n the process details are:");
	printf("\n \n process \nbursttime \t waiting time \t turn around time");
	avg1=avg2=wait=0;
	for(i=0;i<n;i++)
	{
		printf("%d\t \t %d\t\t\t",f[i].pno,f[i].btime);
		printf("%d \t\t\t%d\n",wait,wait+f[i].btime);
		avg2=avg2+wait+f[i].btime;
	}
	  avg1=avg1/n;
	  avg2=avg2/n;
	  printf("\n average waiting time is %f \n",avg1);
	  printf("\n average turn around time is %f \n",avg2);
}
