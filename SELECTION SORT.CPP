#include<stdio.h>
#include<conio.h>
void main()
{
  clrscr();
  int a[15],t,i,j,n;
  printf("Enter no. of elements:");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  for(i=0;i<n;i++)
  {
   for(j=i+1;j<n;j++)
   {
     if(a[i]>a[j])
     {
       t=a[i];
       a[i]=a[j];
       a[j]=t;
       }}}
       getch();
       }