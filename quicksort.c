#include<stdio.h>
	int a[25];
	void quicksort(int first,int last)
{
	int pivot,i,j,temp;
	if(first<last)
	{
	pivot=a[first];
	i=first;
	j=last;
	while(i<j)
	{
	while(a[i]<=pivot&&i<=last)
	{
	i++;
	}
	while(a[j]>=pivot&&j>first)
	{
	j--;
	}
	if(i<j)
	{
	temp=a[i];
	a[i]=a[j];
	a[j]=temp;
	}
	 }
	 
	 temp=a[j];
	 a[j]=a[first];
	 a[first]=temp;
	 quicksort(0,j-1);
	 quicksort(j+1,last);
	}
}
	void main()
	{
		int i,limit;
		printf("enter the limit");
		scanf("%d",&limit);
		printf("ENTER THE ELEMENTS_");
		for(i=0;i<limit;i++)
		{
		scanf("%d",&a[i]);
		}
		quicksort(0,limit-1);
		printf("\nthe sorted array is_\n");
	
		for(i=0;i<limit;i++)
		{
		printf("\n%d\t",a[i]);
	}
}	
				
