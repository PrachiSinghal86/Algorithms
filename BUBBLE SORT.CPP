#include<stdio.h>
#include<conio.h>

void main()
{
	clrscr();
	int a[15],n,i,j,t;
	printf("Enter no. of elements:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n-1;i++)
	{
	  for(j=0;j<(n-i);j++)
	  {
	    if(a[j]>a[j+1])
	    {
	     t=a[j];
	     a[j]=a[j+1];
	     a[j+1]=t;
	    }
	    }
	    }
	     for(i=0;i<n;i++)
	     printf("\t%d",a[i]);
		getch();
}