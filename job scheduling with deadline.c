#include<stdio.h>
#include<conio.h>
int main()
{
int n,i,l,m;
printf("Enter no of processes:");
scanf("%d",&n);
int p[n],d[n],j[n];
printf("Enter profit and deadline:");
for(i=0;i<n;i++)
{
scanf("  %d",&d[i]);
}
int pos;
j[0]=0;
l=1;
for(i=1;i<n;i++)
{
  int fl=0,flag=1,x=0;
   for(m=0;m<l;m++)
   {
       if(d[j[m]]==d[i] &&fl==0)
       {
                pos=m+1;

                if (pos>=d[i])
                {x=1;
                 break;
                }
                else
                {fl=1;
                }

       }
       else if (d[j[m]]>d[i] &&fl==0)
       {
            fl=1;
            pos=m;
            if(pos<=d[i])
            {
                     printf("c   ");
                     break;
                     x=1;
            }

       }
       if (fl==1&&x==0)
       {
            if (d[j[m]]<m){
            flag=0;
            printf("c   ");
            x=1;
            break;}
       }
   }
   if(flag==1&&fl==0&&x==0)
   {
      j[l]=i;

      l=l+1;

   }
   else if (flag==1&&x==0)
   {
       for(m=l;m>pos;m--)
       j[m]=j[m-1];
       j[m]=i;

       l=l+1;
   }
}
for(m=0;m<l;m++)
{printf("%d        ",j[m]+1);}
return 0;
}
