#include<stdio.h>
#include<conio.h>
struct edge
{
   int x;
   int y;
   int w;
}et[6];
int main()
{
//Graph
int e=0,i,ma,d,c,j,k;
int vt[7];
int ver[7]={0,0,0,0,0,0,0};
int gr[7][7]={{0,28,0,0,0,10,0},
                        {28,0,16,-1,-1,-1,14},
                        {-1,16,-1,12,-1,-1,-1},
                        {-1,-1,12,-1,22,-1,18},
                        {-1,-1,-1,22,-1,25,24},
                        {10,-1,-1,-1,25,-1,-1},
                        {-1,14,-1,18,24,-1,-1,}
                       };
vt[0]=0;
ver[0]=1;

for (i=0;i<6;i++)
{ ma=1000;
   for(j=0;j<=i;j++)
   {
          for(k=0;k<7;k++)
          {
              if((gr[vt[j]][k]<ma )&& ver[k]==0)
              {
                       if(gr[vt[j]][k]>0){
                                    printf("vb");
                  ma=gr[vt[j]][k];
                  d=k;
                  c=j;
                       }

          }

          }
          }
    et[i].x=d;
    et[i].y=vt[c];
    et[i].w=gr[vt[c]][d];
    vt[i+1]=d;
    ver[d]=1;
}
for (i=0;i<6;i++)
{
    printf("%d  ->  %d  : %d\n",et[i].x+1,et[i].y+1,et[i].w);
}
getch();
return 0;
}
