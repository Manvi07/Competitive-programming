#include<stdio.h>
typedef struct data{
  int g; int f; int v;
}obj;
void fun(obj p)
{
  p.g=45;
  printf("g=%d\n",p.g);
}
int main()
{
  obj k;
  fun(k);return 0;
}
