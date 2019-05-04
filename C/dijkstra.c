#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 1000000000

typedef struct l{
  int d;
  struct l* next;
}List;

List* createList()
{
  return NULL;
}
List *insert(List *l,int val)
{
  List *temp=l;
  if(temp==NULL)
  {
    l=(List*)malloc(sizeof(List));
    l->d=val;
    l->next=NULL;
    return l;
  }
  while(temp->next)
  {
    temp=temp->next;
  }
  temp->next=(List*)malloc(sizeof(List));
  temp->next->d=val;
  temp->next->next=NULL;
  return l;
}
void printList(List* l)
{
  List* temp=l;
  while(temp)
  {
    printf("%d ",temp->d);
    temp=(List*)temp->next;
  }
  printf("\n" );
}

int **g;
List **l;
int *visited;

int *set;
long long int **distance;
int minDistance(int V,int s)
{
   long long int min = MAX, min_index;

   for (int v = 0; v < V; v++)
     if (set[v] == 0 && distance[s][v] <= min)
       {  min = distance[s][v]; min_index = v;}

   return min_index;
}
void dijkstra(int src,int V)
{
     for (int i = 0; i < V; i++)
       { distance[src][i] = MAX; set[i] = 0;}
        distance[src][src] = 0;
         for(int count = 0; count < V-1; count++)
     {int u = minDistance(V,src);
     set[u]=1;
     for (int v = 0; v < V; v++)
     if (!set[v] && g[u][v] && distance[src][u] != MAX && distance[src][u]+g[u][v] < distance[src][v])
            distance[src][v] = distance[src][u] + g[u][v];
     }
     // printf("%d\n",distance[V-1]);
}
int main()
{
  int v,e;
  scanf("%d%d",&v,&e);
  l=(List**)malloc(v*sizeof(List*));
  g=(int**)malloc(v*sizeof(int*));
  visited=(int*)malloc(v*sizeof(int));
  distance=(long long int**)malloc(v*sizeof(long long int*));
  for(int i=0;i<v;i++)
  {
    l[i]=createList();
    g[i]=(int*)malloc(v*sizeof(int));
    distance[i]=(long long int*)malloc(v*sizeof(long long int));
  }
  int *v1,*v2,*p;

  v1=(int*)malloc(e*sizeof(int));
  v2=(int*)malloc(e*sizeof(int));
  p=(int*)malloc(e*sizeof(int));
  set=(int*)malloc(v*sizeof(int));
  for(int i=0;i<e;i++)
  {
    scanf("%d%d%d",&v1[i],&v2[i],&p[i]);
      g[v1[i]-1][v2[i]-1]=p[i];
      g[v2[i]-1][v1[i]-1]=p[i];
      l[v1[i]-1]=insert(l[v1[i]-1],v2[i]);
      l[v2[i]-1]=insert(l[v2[i]-1],v1[i]);
  }
  int max=0;
for(int i=0;i<v;i++)
  dijkstra(i,v);
  for(int i=0;i<v;i++)
  for(int j=0;j<v;j++)
  if(distance[i][j]>max)
  max=distance[i][j];
  printf("%d\n",max );
  free(l);
  free(g);
  free(visited);
  return 0;
}
