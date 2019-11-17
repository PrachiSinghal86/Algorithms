#include<stdio.h>
int main()
{
    int v,i,j,k;
    printf("Enter number of vertices:");
    scanf("%d",&v);
    int a[v][v];
    printf("Enter adjacency matrix:");
    for(i=0;i<v;i++)
    {
        for(j=0;j<v;j++)
        scanf("%d",&a[i][j]);
    }

    for(i=0;i<v;i++)
    {
       for(j=0;j<v;j++)
       {
          for(k=0;k<v;k++)
          {
                a[i][j]=(a[i][j] || (a[i][k]&&a[k][j]));
          }
       }
    }
    for(i=0;i<v;i++)
    {
        for(j=0;j<v;j++)
        printf("%d   ",a[i][j]);
        printf("\n");
    }
    return 0;
}
