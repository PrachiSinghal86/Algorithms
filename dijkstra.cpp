#include<stdio.h>
int sm(int l[],int s[],int n)
{
    int m,min=10000;
    for(m=0;m<n;m++)
    {
        if(s[m]==0&&l[m]<min)
        {
            min=l[m];
            break;
        }
    }
    return m;
}
int main()
{
   int i,j,k;
   int n,s;
   printf("Enter number of vertices:");
   scanf("%d",&n);
   int gptr[n][n],set[n],l[n],p[n];
   printf("Enter adjacency matrix:");
   for(i=0;i<n;i++)
   {
       set[i]=0;
       for(j=0;j<n;j++)
       {
           scanf("%d",&gptr[i][j]);
       }
   }
   printf("Enter Source:");
   scanf("%d",&s);
   for(i=0;i<n;i++)
   {
      if(gptr[s][i]==0)
      {
          l[i]=10000;
          p[i]=-1;
      }
      else
      {
         l[i]=gptr[s][i];
         p[i]=s;
      }
   }
   set[s]=1;
   l[s]=0;
   int fl=0,d;
   while(!fl)
   {
         d=sm(l,set,n);
         set[d]=1;
         for(i=0;i<n;i++)
         {
             if(set[i]!=1)
             {
                  if(gptr[i][d]!=0)
                  {
                        if(l[d]+gptr[i][d]<l[i])
                        {
                              l[i]=l[d]+gptr[i][d];
                              p[i]=d;
                        }
                  }
             }
         }
         fl=1;
         for(i=0;i<n;i++)
         {
             if(set[i]==0)
             {
                  fl=0;
                  break;
             }

         }
   }
printf("  Length      Path")
for(i=0;i<n;i++)
{
     printf("%d                    %d\n",l[i],p[i]);
}
}
