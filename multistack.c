#include<stdio.h>
#include<stdlib.h>
int st[10],top[10],size=10,bo[10];
void push(int i,int data);
int pop(int stack);
void main()
{
	int i,n,choice,data,d,stack;
	top[0]=-1;
	bo[0]=-1;
	printf("enter the number of stacks:");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		top[i]=bo[i]=((size-1)/n)*i;
	}
	printf("1.push\n2.pop\n");
	do
	{
		printf("enter your choice:");
		scanf("%d",&choice);
		switch(choice)
	{
		case 1:
			printf("enter the element:");
			scanf("%d",&data);
			printf("enter the stack no:\n");
			scanf("%d",&stack);
			push(stack,data);
			break;
		case 2:
			printf("enter the stack no:");
			scanf("%d",&stack);
			d=pop(stack);
			printf("%d\n",d);
			break;
	}
		}while(1);
}
void push(int i,int data)
{
	if (top[i]==bo[i+1])
		{
		printf("overflow");
		exit(0);
		}
	else	
		{
		st[++top[i]]=data;
		}
}
int pop(int stack)
{
	int d;
	if(top[stack]==bo[stack])
	{
		printf("underflow");
		exit(0);
	}
	else
	{
		d=st[top[stack]];
		top[stack]--;
	}

	return d;
}		
			
