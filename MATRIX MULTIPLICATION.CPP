#include<conio.h>
#include<stdio.h>
#include<iostream.h>
void main()
{
  clrscr();

  int a[5][5],b[5][5],i,j,k,c[5][5],m,n,o,p;
  printf("Enter the order m*n of 1 matrix:");
  scanf("%d%d",&m,&n);
    printf("Enter the order o*p of 2 matrix:");
  scanf("%d%d",&o,&p);
  if(n!=o)
  printf("Cannot multiply");
  else
  {
     printf("Enter 1 matrix");
     for(i=0;i<m;i++)
     {
       for(j=0;j<n;j++)
       scanf("%d",&a[i][j]);
     }
     printf("Enter 2 matrix:");
     for(i=0;i<o;i++)
     {
       for(j=0;j<p;j++)
       scanf("%d",&b[i][j]);
     }

     for(i=0;i<m;i++)
     {
     for(j=0;j<p;j++)
     {    c[i][j]=0;
	for(k=0;k<n;k++)
	{
	  c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
	  }
	  }
	  }
	  for(i=0;i<m;i++)
	  {    printf("\n");
	    for(j=0;j<p;j++)
	    printf("\t%d",c[i][j]);
	  }
	  }
	  getch();
	}