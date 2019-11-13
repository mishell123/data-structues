#include<stdio.h>
#include<stdlib.h>
int q[10],b[10],size=10,f[10],r[10];
void enqueue(int i,int data);
int dequeue(int que);
void main()
{
	int i,n,choice,data,d,que;
	b[0]=-1;
	f[0]=-1;
	r[0]=-1;
	printf("enter the number of queues:");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		b[i]=f[i]=r[i]=((size-1)/n)*i;
	}
	printf("1.enqueue\n2.dequeue\n");
	do
	{
		printf("enter your choice:");
		scanf("%d",&choice);
		switch(choice)
	{
		case 1:
			printf("enter the element:");
			scanf("%d",&data);
			printf("enter the queue no:\n");
			scanf("%d",&que);
			enqueue(que,data);
			break;
		case 2:
			printf("enter the queue no:");
			scanf("%d",&que);
			d=dequeue(que);
			printf("%d\n",d);
			break;
	}
		}while(1);
}
void enqueue(int i,int data)
	{
	
		if(r[i]==b[i+1])
		{
			printf("overflow");
			exit(0);
		}
		else
		{
			if(r[i]==b[i])
			{
				f[i]++;
				q[++r[i]]=data;
			}
		}
}
int dequeue(int que)
{
	int d;
	if(f[que]==b[que])
		{
		printf("empty");
		exit(0);
		}
	else
		{
		d=q[f[que]];
		if(f[que]==r[que])
		{
		f[que]=r[que]=b[que];
		}
	
		else
			{
			f[que]++;
			}
	}
		return d;
}
	
	
