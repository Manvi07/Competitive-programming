#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
  int v,e;
  scanf("%d%d",&v,&e);
  char src;
  scanf( " %c",&src);
  char v1[e],v2[e];
  int wt[e];
  int a[v][v];
  for(int i=0;i<v;i++)
  for(int j=0;j<v;j++)
  a[i][j]=0;
  for(int i=0;i<e;i++)
  {
    scanf(" %c %c%d",&v1[i],&v2[i],&wt[i]);
    a[v2[i]-'A'][v1[i]-'A']=wt[i];
    a[v1[i]-'A'][v2[i]-'A']=wt[i];
  }
  int visited[v];int s=0;
  for(int i=0;i<v;i++)
  visited[i]=0;
  visited[src-'A']=1;
  while(1)
  {
    int p=100000;int k;
    for(int j=0;j<v;j++)
    for(int i=0;i<v;i++)
    if(visited[j]==1 && visited[i]==0 && a[j][i]<p && a[j][i]>0)
    {
      p=a[j][i];
      k=i;
    }
    if(p!=100000)
    {visited[k]=1;
    s=s+p;}
    else break;
  }
  printf("%d\n",s );
  return 0;
}
