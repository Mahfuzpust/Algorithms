#include<stdio.h>
int main()
{
    int n,weight[20][20],visit[20]={0},min, mincost=0;
    int i,j,a,b,u,v,n1=1;
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            scanf("%d",&weight[i][j]);// input
            if(weight[i][j] ==0)
                weight[i][j]=999;
        }
    }
    visit[1]=1;
    printf("\n");
    while(n1 < n)
    {
        for(i=1,min=999; i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                if(weight[i][j] < min)
                {
                    if(visit[i]!=0)
                    {
                        min=weight[i][j];
                        a=u=i;
                        b=v=j;
                    }
                }
            }
        }

         if(visit[u]==0 || visit[v]==0)
         {
        mincost=mincost+min;
        visit[b]=1;
        }
    weight[a][b]=weight[b][a]=999;
    }

    printf("min cost : %d", mincost);

}
