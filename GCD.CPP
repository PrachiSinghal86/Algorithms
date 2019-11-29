#include<iostream.h>
#include<conio.h>
void main()
{
   clrscr();
   int a,b,t;
   cout<<"Enter 2 number to find gcd:";
   cin>>a>>b;
   while(b)
   {
       t=b;
       b=a%b;
       a=t;
   }
   cout<<"\nGcd ="<<a;
   getch();
   }