#include<bits/stdc++.h>
using namespace std;
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
typedef struct q
{
  int *arr;
  int head,tail;
  int size;
}Queue;

Queue* createQ(int n)
{
  Queue * q=(Queue*)malloc(sizeof(Queue));
  q->head=-1;
  q->tail=-1;
  q->size=n;
  q->arr=(int*)malloc((n)*sizeof(int));
  return q;
}
int isFull(Queue *q)
{
  return ((q->tail==q->size-1 && q->head==0) || (q->head!=0 && q->tail==q->head-1));
}
Queue * enqueue(Queue *q,int val)
{
  if(isFull(q))
  {
    printf("Queue is full!\n");
    return q;
  }
  if(q->tail==-1 && q->head==-1)
  {q->tail++;q->head++;}
  else
  q->tail=(q->tail+1)%q->size;
  q->arr[q->tail]=val;
  return q;
}
int isEmpty(Queue* q)
{
  return (q->head==-1);
}
Queue *dequeue(Queue *q)
{
  if(isEmpty(q))
  {
    printf("Empty queue!\n" );
    return q;
  }
  // printf("%d is dequeued.\n",q->arr[q->head]);
  if(q->head==q->tail)
      q->head=q->tail=-1;
  else q->head=(q->head+1)%q->size;
  return q;
}
int **g;
List **l;
int *visited;
int *Dist;

void BFS(int src,int dest)
{
  Queue *q=createQ(MAX);
  q=enqueue(q,src);

  while(!isEmpty(q))
  {
    visited[src-1]=1;
    Dist[src-1]=5;
    int u=q->arr[q->head];
    // printf(/"%d ",u );
    q=dequeue(q);
    List *temp=l[u-1];
    while(temp)
    {
      if(!visited[temp->d-1])
      {
        visited[temp->d-1]=1;
        q=enqueue(q,temp->d);
        Dist[temp->d-1]=Dist[temp->d-1]+Dist[u-1];
      }
      temp=temp->next;
    }
  }
  printf("dist=%d\n",Dist[dest-1] );
  free(q);
}
int main()
{
  int v,e;
  scanf("%d%d",&v,&e);
  l=(List**)malloc(v*sizeof(List*));
  g=(int**)malloc(v*sizeof(int*));
  visited=new int(v);
  Dist=new int(v);
  for(int i=0;i<v;i++)
  {
    l[i]=createList();
    g[i]=(int*)malloc(v*sizeof(int));
  }
  int *v1,*v2,*p;
  int d;
  scanf("%d",&d);
  v1=(int*)malloc(e*sizeof(int));
  v2=(int*)malloc(e*sizeof(int));
  p=(int*)malloc(e*sizeof(int));
  for(int i=0;i<e;i++)
  {
    scanf("%d%d%d",&v1[i],&v2[i],&p[i]);
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
  // for(int i=0;i<v;i++)
  // if(visited[i]==0)
  BFS(1,3);
  printf("\n" );
  free(l);
  free(g);
  free(visited);
  return 0;
}
