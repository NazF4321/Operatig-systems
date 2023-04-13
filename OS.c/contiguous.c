#include<stdio.h>
#include<conio.h>
void main()
{
	int f[50],i,j,st,len,c,k,count=0;
	for(i=0;i<50;i++)
	f[i]=0;
	printf("files allocated are:\n");
	X:count=0;
	printf("enter starting block and length of files:");
	scanf("%d %d",&st,&len);
	for(k=st;k<len;k++)
	if(f[k]==0)
	count++;
	if(len==count)
	{
		for(j=st;j<len;j++)
		if(f[j]==0)
		{
			f[j]=1;
			printf("%d %d \n",j,f[j]);
		}
		if(j!=(st+len-1))
		printf("the file is allocated to disk \n");
	}
	else
	printf("the file is not allocated \n");
	printf("do you want to enter more files(yes-1/No-0)");
	scanf("%d",&c);
	if(c==1)
	goto X;
	else 
	getch();
}
