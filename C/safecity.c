#include<stdio.h>
#include<string.h>
#include<stdlib.h>
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
int **a,**b;int *visited1,*visited2;
void BFS(int s,int n)
{
  Queue *q=createQ(1000);
  q=enqueue(q,s);
  visited1[s-1]=1;
  while(!isEmpty(q))
  {
    int u=q->arr[q->head];
    q=dequeue(q);
    // printf("%d ",u );
    for(int i=0;i<n;i++)
    if(visited1[i]==0 && a[u-1][i])
    {
      visited1[i]=1;
      q=enqueue(q,i+1);
    }
  }free(q);
}
void BFS2(int s,int n)
{
  Queue *q=createQ(1000);
  q=enqueue(q,s);
  visited2[s-1]=1;
  while(!isEmpty(q))
  {
    int u=q->arr[q->head];
    q=dequeue(q);
    // printf("%d ",u );
    for(int i=0;i<n;i++)
    if(visited2[i]==0 && b[u-1][i])
    {
      visited2[i]=1;
      q=enqueue(q,i+1);
    }
  }free(q);
}
int check(int q1[],int q2[],int n)
{
  for(int i=0;i<n;i++)
  if(!(q1[i]) || !(q2[i]))
  return 0;
  return 1;
}
int main()
{
  int n,e;
  int d;
  scanf("%d%d%d",&n,&e,&d );

  a=(int**)malloc(n*sizeof(int*));
  for(int i=0;i<n;i++)
  a[i]=(int*)malloc(n*sizeof(int));
  b=(int**)malloc(n*sizeof(int*));
  for(int i=0;i<n;i++)
  b[i]=(int*)malloc(n*sizeof(int));
  visited1=(int*)malloc(n*sizeof(int));
  visited2=(int*)malloc(n*sizeof(int));

  int v1[e],v2[e];
  for(int i=0;i<e;i++)
  {
    scanf("%d%d",&v1[i],&v2[i]);
    a[v1[i]-1][v2[i]-1]=1;
    b[v2[i]-1][v1[i]-1]=1;
  }
  if(!d)
  {
    printf("0\n" );exit(0);
  }
  BFS(1,n);BFS2(1,n);
  printf("%d\n",check(visited1,visited2,n) );
  free(b);free(a);
  return 0;
}
