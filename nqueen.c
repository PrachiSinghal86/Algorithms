#include<stdio.h>
#include<conio.h>
#include<math.h>
int x[10];

int place(int k,int i)
{int j;

   for(j=1;j<=k-1;j++){
   if(x[j]==i ||((x[j]-i)==(j-k))||(x[j]-i==k-j))
   {

         return 0;
   }
   }

   return 1;
}

void N_queen(int k,int n)
{
int i,s;
for (i=1;i<=n;i++){
if(place(k,i))
{

x[k]=i;
if(k==n)
{
         for(s=1;s<=n;s++)
         {
                  printf("%d\t",x[s]);

         }
         printf("\n");
}
else{
N_queen(k+1,n);
}
}

}
  }
int main()
{
 int n,k,s;

 printf("Enter n:");
 scanf("%d",&n);

 N_queen(1,n);

}
