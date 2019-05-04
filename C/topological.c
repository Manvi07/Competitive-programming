#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int **g;int *visited;
void topological_sort(int s,int n)
{
  visited[s]=1;printf("%c ",(char)s+'A');

  for(int i=0;i<n;i++)
  if(visited[i]==0)
  topological_sort(i,n);

}
int check(int n)
{
  for(int i=0;i<n;i++)
  if(visited[i]==0)
  return 1;
  return 0;
}
int main()
{
    int v,e;
    scanf("%d%d",&v,&e);
    g=(int**)malloc(v*sizeof(int*));
    visited=(int*)malloc(v*sizeof(int));
    for(int i=0;i<v;i++)
    {
      g[i]=(int*)malloc(v*sizeof(int));
    }
    char *v1,*v2;
    int d;
    scanf("%d",&d);
    v1=(char*)malloc(e*sizeof(char));
    v2=(char*)malloc(e*sizeof(char));
    for(int i=0;i<e;i++)
    {
      char s[10];getchar();
      fgets(s,10,stdin);
      v1[i]=s[0];v2[i]=s[strlen(s)-1];
      if(d)
      {
        g[v1[i]-'A'][v2[i]-'A']=1;
      }
      else
      {
        g[v1[i]-'A'][v2[i]-'A']=1;
        g[v2[i]-'A'][v1[i]-'A']=1;
      }
    }
    while(check(v))
    {
      
    }
  printf("\n" );
    return 0;
  }
