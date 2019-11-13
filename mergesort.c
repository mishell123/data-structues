#include<stdio.h>
void partition(int a[],int low,int high);
void merge(int a[],int low,int mid,int high);
void main()
{
	int a[20],i,lim,high,low;
	printf("enter the limit of the array:");
	scanf("%d",&lim);
	printf("enter th elements:");
	for(i=0;i<lim;i++)
		{
			scanf("%d",&a[i]);
		}
	low=0;
	high=lim-1;
	partition(a,low,high);
	printf("new sorted array is:");
	for(i=0;i<lim;i++)
	{
		printf("%d ",a[i]);
	}
	
	
}
void partition(int a[],int low,int high)
{
	int mid;
	if(low<high)
	{
		mid=(low+high)/2;
		partition(a,low,mid);
		partition(a,mid+1,high);
		merge(a,low,mid,high);
	}
}
void merge(int a[],int low,int mid,int high)
	{
		int i,l,m,temp[20],k;
		l=low;
		i=low;
		m=mid+1;
		while(l<=mid&&m<=high)
			{
				if(a[l]<=a[m])
				{
					temp[i]=a[l];
					l++;
				}
				else
				{
					temp[i]=a[m];
					m++;
				}
					i++;

			}
			if(l>mid)
				{
					for(k=m;k<=high;k++)
						{
							temp[i]=a[k];
							i++;
						}
				}
			else
				{
					for(k=l;k<=mid;k++)
					{
						temp[i]=a[k];
						i++;
					}
				}
					for(k=low;k<=high;k++)
						{
							a[k]=temp[k];
						}
			}
			
		
		

