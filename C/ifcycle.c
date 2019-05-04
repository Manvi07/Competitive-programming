#include<stdio.h>
#include<string.h>
#include<stdlib.h>
// #include "stack.h"

 int **g;
 int *visited;int *p;
int *a;

int DFS(int src,int n)
 {

   // printf("%d\n",src+1 );
if(!visited[src])
{
  visited[src]=1;
  a[src]=1;
     for(int i=0;i<n;i++)
   {
     if(!visited[i] && DFS(i,n))
     return 1;
     else if(a[i])
     return 1;
   }
 }
   a[src]=0;
   return 0;
 }
int cycle(int n)
{
  for(int i=0;i<n;i++)
  if(DFS(i,n))
  return 1;
  return 0;
}
 int main()
 {
   int v,e;
   scanf("%d%d",&v,&e);
   g=(int**)malloc(v*sizeof(int*));
   visited=(int*)malloc(v*sizeof(int));
   p=(int*)malloc(v*sizeof(int));
   a=(int*)malloc(v*sizeof(int));
   for(int i=0;i<v;i++)
   {
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
     }
     else
     {
       g[v1[i]-1][v2[i]-1]=1;
       g[v2[i]-1][v1[i]-1]=1;
     }
   }
if(cycle(v))
printf("cyclic\n");
else printf("non cyclic\n" );
   return 0;
 }
