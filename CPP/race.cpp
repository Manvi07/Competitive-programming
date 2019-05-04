#include <bits/stdc++.h>
#define $ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

long long *dist;
void bfs(int n,int src,list<int>l[])
{
  int *visited;
  visited = new int[n];
  dist = new long long[n];
  fill_n(visited, n, 0);
  fill_n(dist, n, 0);
  visited[src-1] = 1;
  queue<int>q;
  q.push(src-1);
  while(!q.empty())
  {
    int u=q.front();
    q.pop();
    for(auto i : l[u])
    if(!visited[i])
    {
      visited[i] = 1;
      dist[i] = dist[u]+1;
      q.push(i);
    }
  }
  delete visited;
}

int main()
{
  $
  int s,n,e;
  cin >> s >> n >> e;
  list<int>l[n];
  int v1,v2;

  for(int i=0; i<e; i++)
  {
    cin >> v1 >> v2;
    l[v1-1].push_back(v2-1);
    l[v2-1].push_back(v1-1);
  }
  multiset<long long>m;
  // for(int i=0; i<s; i++)
  // {
  //   bfs(n, i+1 ,l);
  //   m.insert(dist[n-1]);
  // }
  bfs(n, n, l);
  for(int i=0;i<s;i++)
  m.insert(dist[i]);
  int c = 0;
  long long g = *(m.rbegin());
  for(auto i : m)
  {
    if(g==i)
    c++;
  }
  cout << c << '\n';
  delete dist;
  return 0;
}
