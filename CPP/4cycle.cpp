#include <bits/stdc++.h>
#define $ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int *visited;

bool dfs(int src,int n, list<int>l[])
{
  visited=new int[n];
  stack <int>s;
  int dist[n]={0};
  s.push(src);
  dist[src]=1;
  int c=0;
  while(!s.empty())
  {
    int u = s.top();
    cout<<u<<" ";
    s.pop();
    for(auto i : l[u])
    {
      if(!visited[i])
      {
        s.push(i);
        dist[i]=dist[u]+1;
      }
      else
      {
        if(dist[i]==dist[u]-4)
        return true;
      }
    }
    visited[u]=1;
  }
  return false;
}

int main()
{
  $
  int n,e;
  cin >> n >> e;
  int v1, v2;
  list<int>l[n];
  // int count=0;
cout<<"fdsh\n";
  fill_n(visited, n, 0);
  for(int i=0;i<e;i++)
  {
    cin >> v1 >> v2;
    l[v1-1].push_back(v2-1);
    l[v2-1].push_back(v1-1);
  }
  for(int i=0;i<n;i++)
  {
    if(visited[i]==0)
    if(dfs(i,n,l))
    {
      cout<<"yes\n";
      return 0;
    }
  }

  cout<<"no"<<endl;
  return 0;
}
