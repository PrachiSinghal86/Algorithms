#include<stdio.h>

int main()
{

    int gr[4][4]={{0,1,0,0},
                            {1,0,1,0},
                            {0,1,0,1},
                            {1,0,1,0}};
int v[4]={0,0,0,0};
int st[4],sp=-1;
st[0]=0;
sp=0;
v[0]=1;
int l=1,x;
int p=0,i;
printf("%d",0);
while(l>0)
{
    x=st[p];
   for(i=0;i<4;i++)
   {
      if(gr[x][i]==1 &&v[i]==0)
      {
          sp=sp+1;
          st[sp]=i;
          printf("%d",i);
          v[i]=1;
          l=l+1;
      }
   }
   p=p+1;
   l=l-1;
}
return 0;
}
