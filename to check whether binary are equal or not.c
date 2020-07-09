#include<iostream.h>
struct node
{
    int data;
    struct node*l;
     struct node*r;
}root1,root2;
bool bn(root1,root2)
{
    int x,y;
    if root1==NULL and root2==NULL)
    {
       return 1;
    }
    else if (root1!=NULL&&root2!=NULL)
    {
         if (root1.data==root2.data)
         {
             x=bn(root1.l,root2.left);
             y=bn(root1.r,root2.r);
             if (x==1 &&y==1)
             {
                 return 1;
             }
             else
             {
                  return 0;
             }
         }
         else
         {
              return 0;}
    }
    else
    {

             return 0;
    }
}
int main
{

}
