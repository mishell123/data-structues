#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *lchild,*rchild;
};
struct node*create_node(int item);
struct node* insert(struct node *root,struct node *n);
void traversal(struct node *root);
void main()
{
int choice,data;
struct node *n,*root;
while(1)
{
printf("1.insertion\n2.traversal\nenter your choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:printf("enter the data:");
scanf("%d",&data);
n=create_node(data);
root=insert(root,n);
break;
case 2:traversal(root);
break;
}
}
}
struct node*create_node(int item)
{
struct node *p;
p=(struct node*)malloc(sizeof(struct node));
p->data=item;
p->lchild=NULL;
p->rchild=NULL;
return p;
}
struct node* insert(struct node *root,struct node *n)
{
struct node *ptr,*p;
if(root==NULL)
root=n;
else
{
ptr=root;
while(ptr!=NULL)
{
if(ptr->data>=n->data)
{
p=ptr;
ptr=ptr->lchild;
}
else
{
p=ptr;
ptr=ptr->rchild;
}
}
if(p->data>=n->data)
{
p->lchild=n;
}
else
{
p->rchild=n;
}
}
return root;
}
void traversal(struct node *root)
{
if(root!=NULL)
{
traversal(root->lchild);
printf("\n%d\n",root->data);
traversal(root->rchild);
}

}
