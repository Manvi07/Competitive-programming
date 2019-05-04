#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int a[13][13];
int set[13];
int minDist(int dist[])
{int mini;
  int min=1000000000-1;
  for(int i=1;i<13;i++)
  if(set[i]==0 && dist[i]<=min)
  {min=dist[i];mini=i;}
  return mini;
}
void Min_path(int src,int dest)
{
int dist[13];
for(int i=1;i<13;i++)
{set[i]=0;
dist[i]=1000000000-1;}
dist[src]=0;
for(int i=1;i<13;i++)
{if(set[dest]==1)break;
  int u=minDist(dist);
  set[u]=1;
  for(int j=1;j<13;j++)
  if(!set[j] && a[u][j] && dist[u]+a[u][j]<dist[j])
  dist[j]=dist[u]+a[u][j];

}
  printf("%d\n",dist[dest] );
}
int main()
{

  for(int i =0;i<13;i++)
  for(int j=0;j<13;j++)
  a[i][j]=0;
  int v1[16]={1,2,3,2,5,3,3,3,7,11,8,8,10,9,10,9};
  int v2[16]={2,3,4,4,6,5,8,7,9,12,12,7,11,10,5,12};
  for(int i=0;i<16;i++)
  a[v1[i]][v2[i]]=1;
  char src[3],dest[3];
  int source,destn;
  scanf(" %s %s",src,dest);
  if(strcmp("MN",src)==0)
  source=1;
  else if(strcmp("CH",src)==0)
  source=2;
  else if(strcmp("DL",src)==0)
  source=3;
  else if(strcmp("DD",src)==0)
  source=4;
  else if(strcmp("KL",src)==0)
  source=5;
  else if(strcmp("GU",src)==0)
  source=6;
  else if(strcmp("BH",src)==0)
  source=7;
  else if(strcmp("MU",src)==0)
  source=8;
  else if(strcmp("HY",src)==0)
  source=9;
  else if(strcmp("CN",src)==0)
  source=10;
  else if(strcmp("KK",src)==0)
  source=11;
  else if(strcmp("GO",src)==0)
  source=12;
  if(strcmp("MN",dest)==0)
  destn=1;
  else if(strcmp("CH",dest)==0)
  destn=2;
  else if(strcmp("DL",dest)==0)
  destn=3;
  else if(strcmp("DD",dest)==0)
  destn=4;
  else if(strcmp("KL",dest)==0)
  destn=5;
  else if(strcmp("GU",dest)==0)
  destn=6;
  else if(strcmp("BH",dest)==0)
  destn=7;
  else if(strcmp("MU",dest)==0)
  destn=8;
  else if(strcmp("HY",dest)==0)
  destn=9;
  else if(strcmp("CN",dest)==0)
  destn=10;
  else if(strcmp("KK",dest)==0)
  destn=11;
  else if(strcmp("GO",dest)==0)
  destn=12;
  Min_path(source,destn);
  return 0;
}
