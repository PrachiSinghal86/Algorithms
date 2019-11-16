#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i,j, s,n,p=1,t;
float prft=0;
float pu[20],pp[20];
printf("Enter bag size:");
scanf("%d",&s);
printf("Enter no. of products:");
scanf("%d",&n);
printf("Enter weight of products and profits:");
for(i=0;i<n;i++)
{
    scanf("%f",&pu[i]);
    scanf("%f",&pp[i]);
    pp[i]=pp[i]/pu[i];
}

for(i=0;i<n;i++)
{
  for(j=i+1;j<n;j++)
  {
     if(pp[i]<pp[j])
     {
	t=pp[i];
	pp[i]=pp[j];
	pp[j]=t;
	t=pu[i];
	pu[i]=pu[j];
	pu[j]=t;
     }
     else if(pp[i]==pp[j])
     {
       if(pu[i]<pu[j])
       {
       t=pp[i];
	pp[i]=pp[j];
	pp[j]=t;
	t=pu[i];
	pu[i]=pu[j];
	pu[j]=t;
       }
     }
  }
}

i=0;
int d=0,g=0;
while(i<n)
{
	if(g+pu[i]<=s)
      {	d=pp[i]*pu[i];
	prft=prft+d;
	g=g+pu[i];
	i=i+1;
      }

      else
      i=i+1;

}
 printf("Total Profit:%f",prft);
 getch();
}