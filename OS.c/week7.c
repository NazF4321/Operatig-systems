#include<stdio.h>
main()
{
int n,fit,mem[10],y[10],z[10],a,d;
int j=1;
int m,i;
printf("\n Enter the total no. of memory block:");
scanf("%d",&n);
printf("\n Enter the memory size of the block:");
for(i=0;i<n;i++)
scanf("%d",&mem[i]);
printf("\n Enter the size of the fit in memory:");
scanf("%d",&fit);
for(i=0;i<n;i++)
{
  if(fit<=mem[i])
  {
    printf("\n The first fit is:%d \n",mem[i]);
    break;
  }
 
  for(i=1;i<n;i++)
  {
    if(fit<=mem[i])
     {
       y[j]=mem[i];
       z[j]=mem[i];

        j++;
      }
        m=j-1;
        a=y[j];
        j=1;
   }
      for(j=2;j<m;j++)
      {
         if(a>y[j])
         {
           a=y[j];
         }
       }
         d=z[1];
         for(j=2;j<m;j++)
       {
         if(d<=z[j])
          {
           d=z[j];
          }
        }
           printf("\n The best fit is: %d \n",a);
           printf("\n The worst fit is: %d",d);
        }
    }

