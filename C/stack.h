#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct s{
  int *data;
  int top;
  int size;
}Stack;

Stack* createStack(int n)
{
  Stack *s=(Stack*)malloc(sizeof(Stack));
  s->top=-1;
  s->size=n;
  s->data=(int*)malloc((s->size)*sizeof(int));
  return s;
}

int isEmpty_stack(Stack * s)
{
  return s->top==-1;
}

Stack *push(Stack *s,int val)
{
  if(s->top==(s->size-1))
  {
    printf("Stack Overflow!\n" );
    return s;
  }
  s->top++;
  s->data[s->top]=val;
  return s;
}
Stack* pop(Stack* s)
{
  if(isEmpty_stack(s))
  {
    printf("Empty Stack!\n" );
    return NULL;
  }
  printf("%d\n",s->data[s->top]);
  s->top--;
  return s;
}
