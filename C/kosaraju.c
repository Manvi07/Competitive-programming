#include<stdio.h>
#include<string.h>
#include<stdlib.h>
// #include "Graph.h"
#include "stack.h"
#define MAX 100000

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
Stack *s;
void DFS(int src)
{
  visited[src-1]=1;
  printf("%d ",src );
  List *temp=l[src-1];
  while(temp)
  {
    if(!visited[temp->d-1])
    DFS(temp->d);
    temp=temp->next;
  }
  s=push(s,src);
  return;
}

int main()
{
  int v,e;
  scanf("%d%d",&v,&e);
  s=createStack(v);
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
  for(int i=0;i<v;i++)
  if(visited[i]==0)
  DFS(i+1);
  while(isEmpty_stack(s))
  {pop(s);printf("vjh\n" );}
  printf("\n" );
  free(l);
  free(g);
  free(visited);
  return 0;
}
