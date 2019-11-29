#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int a[15],n,k,i,j,t;
 printf("Enter no. of elements:");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 for(i=1;i<n;i++)
 { j=i-1;
  k=a[i];
   while(j>=0&&k<a[j])
   {
     a[j+1]=a[j];
     j--;
   }
   a[j+1]=k;
   }
   for(i=0;i<n;i++)
   printf("%d\t",a[i]);
   getch();
   }