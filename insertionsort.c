#include<stdio.h>
void main()
{
int array[25],temp,i,j,lim;
printf("enter the limit:");
scanf("%d",&lim);
printf("enter the array elements:");
for(i=0;i<lim;i++)
{
scanf("%d",&array[i]);
}
for(i=0;i<lim;i++)
{
temp=array[i];
j=i-1;
while(temp<array[j]&&j>=0)
{
array[j+1]=array[j];
j=j-1;
}
array[j+1]=temp;
}
printf("sorted array is:\n");
for(i=0;i<lim;i++)
{
printf("%d ",array[i]);
}
}
