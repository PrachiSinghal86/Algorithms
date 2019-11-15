#define NULL 0
#include<iostream.h>
#include<conio.h>
struct node
{
   int data;
   struct left;
   struct right;
}*root,*temp,*temp1,*ar[10];
void main()
{
clrscr();
root=(struct * node)malloc(sizeof(struct node);
root->data=5;
root->left=NULL;
root->right=NULL;
temp1= (struct * node)malloc(sizeof(struct node);
root->left=temp1;
temp1->data=7;
 temp1= (struct * node)malloc(sizeof(struct node);
 root->right=temp1;
 temp1->data=9;
 temp1->left=NULL;
 temp->right=NULL;
   temp1= (struct * node)malloc(sizeof(struct node);
 root->left->left=temp1;
 temp1->data=2;
 temp1->right=NULL;
 int i=0,j=0;
 ar[0]=root;
 while(i<=j)
 {
    temp=ar[i];
    print("%d ",temp->data);
    if(temp->left!=NULL)
    {
       j=j+1;
       ar[j]=temp->left)
    }
    if(temp->right!=NULL)
    {
       j=j+1;
       ar[j]=temp->right)
       i=i+1;
    }
 }
}