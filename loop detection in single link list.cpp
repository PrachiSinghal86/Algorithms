#include<iostream>
using namespace std;
#define NULL 0
struct node
{
   int val;
   struct node *ptr;
}*slow,*fast ,*temp2;
int main()
{
   struct node *head;

   struct node * temp= new node();
   temp->val=1;
   head=temp;
   temp2=new node();
   temp->ptr=temp2;
   temp=temp->ptr;
   temp->val=3;
   temp2=new node();
  temp->ptr=temp2;
   temp=temp->ptr;
   temp->val=8;
   temp2=new node();
   temp->ptr=temp2;
   temp=temp->ptr;
   temp->val=10;
   temp->ptr=NULL;

slow=head;
fast=head;
while(fast!=NULL&&fast->ptr!=NULL)
{
    slow=slow->ptr;
    fast=fast->ptr->ptr;
    if (slow==fast)
    {
     cout<<"loop";
     return 0;
    }
}
cout<<"NO LOOP";
return 1;
}
