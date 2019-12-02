#include<stdio.h>
int n,x[20],wegh,w[20],s=0;
int prom(int i,int wt)
{
     if(i>n)
         return 0;
     if((wt+s>=wegh)&&(wt==wegh|| (wt+w[i+1]<=wegh)))
         return 1;
     else
         return 0;
}
void sos(int i,int wt,int t)
{
    if(prom(i,wt))
    {
         if(wt==wegh)
         {
            int j;
             for(j=1;j<=n;j++)
             {printf("%d  ",x[j]);}
             printf("\n");
         }
         else
         {
              x[i+1]=1;
              sos(i+1,wt+w[i+1],s-w[i+1]);
              x[i+1]=0;
              sos(i+1,wt,s-w[i+1]);
         }
    }
}
int main()
{
    printf("Enter number of values:");
    scanf("%d",&n);
    int i;
    w[0]=0;
    printf("Enter values:");
    for(i=1;i<=n;i++)
    {
       scanf("%d",&w[i]);
       s=s+w[i];
    }
    printf("Enter sum:");
    scanf("%d",&wegh);
    sos(0,0,s);


}
