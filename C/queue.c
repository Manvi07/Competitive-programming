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
  printf("%d is dequeued.\n",q->arr[q->head]);
  if(q->head==q->tail)
      q->head=q->tail=-1;
  else q->head=(q->head+1)%q->size;
  return q;
}
void PrintQ(Queue *q)
{
  if(isEmpty(q))return;
  if(q->head<=q->tail)
  {
    for(int i=q->head;i<=q->tail;i++)
    printf("%d ",q->arr[i]);
    printf("\n" );
  }
  else
  {
    for(int i=q->head;i<q->size;i++)
    printf("%d ",q->arr[i]);
    for(int i=0;i<=q->tail;i++)
    printf("%d ",q->arr[i]);
    printf("\n" );
  }
}
int main()
{
  Queue *q=createQ(5);
  q=enqueue(q,7);PrintQ(q);
  q=enqueue(q,9);PrintQ(q);
  q=enqueue(q,5);PrintQ(q);
  q=enqueue(q,8);PrintQ(q);
  q=dequeue(q);PrintQ(q);
  q=enqueue(q,78);PrintQ(q);
  q=enqueue(q,25);PrintQ(q);
  q=dequeue(q);PrintQ(q);
  q=enqueue(q,2);PrintQ(q);
  q=dequeue(q);PrintQ(q);
  q=enqueue(q,20);PrintQ(q);
  return 0;
}
