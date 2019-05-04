#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "Graph.h"
int isBipartite(int V, int src)
{
    int colorArr[V];
    for (int i = 0; i < V; ++i)
        colorArr[i] = -1;
    colorArr[src] = 1;
 Queue *q=createQ(1000);
    q=enqueue(q,src);
    while (!isEmpty(q))

    {
        int u = q->arr[q->head];
        q=dequeue(q);
        if (g[u][u] == 1)
           return 0;

        for (int v = 0; v < V; ++v)
        {
            if (g[u][v] && colorArr[v] == -1)
            {
                colorArr[v] = 1 - colorArr[u];
                q=enqueue(q,v);
            }
            else if (g[u][v] && colorArr[v] == colorArr[u])
                return 0;
        }
    }
    return 1;
}
int main()
{
  int v,e;
  scanf("%d%d",&v,&e);
  l=(List**)malloc(v*sizeof(List*));
  g=(int**)malloc(v*sizeof(int*));
  visited=(int*)malloc(v*sizeof(int));
  for(int i=0;i<v;i++)
  {
    l[i]=createList();
    g[i]=(int*)malloc(v*sizeof(int));
  }
  int *v1,*v2;
  int d;
  scanf("%d",&d);
  v1=(int*)malloc(e*sizeof(int));
  v2=(int*)malloc(e*sizeof(int));
  for(int i=0;i<e;i++)
  {
    scanf("%d%d",&v1[i],&v2[i]);
    if(d)
    {
      g[v1[i]-1][v2[i]-1]=1;
      l[v1[i]-1]=insert(l[v1[i]-1],v2[i]);
    }
    else
    {
      g[v1[i]-1][v2[i]-1]=1;
      g[v2[i]-1][v1[i]-1]=1;
      l[v1[i]-1]=insert(l[v1[i]-1],v2[i]);
      l[v2[i]-1]=insert(l[v2[i]-1],v1[i]);
    }
  }
  for(int i=0;i<v;i++)
  {
    printf("%d ",i+1 );
    printList(l[i]);
  }
  for(int i=0;i<v;i++)
  {
    for(int j=0;j<v;j++)
    printf("%d ",g[i][j]);
    printf("\n" );
  }
  printf("isBipartite result %d\n",isBipartite(v,1) );
  free(l);
  free(g);
  free(visited);
  return 0;
}
