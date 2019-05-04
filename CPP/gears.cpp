#include <bits/stdc++.h>
#define $ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int *visited;
int *dist;

bool check(int n,int src, list<int>l[])
{
  int *color;
  color = new int[n];
  dist = new int[n];

  fill_n(color, n, -1);
  fill_n(dist, n , 0);

  color[src] = 1;
  visited[src]=1;
  queue<int>q;
  q.push(src);

  while(!q.empty())
  {
    int u = q.front();
    q.pop();
    for(auto i : l[u])
    {
      if(color[i]==-1)
      {
        visited[i] = 1;
        dist[i] = 1 + dist[u];
        color[i] = 1 - color[u];
        q.push(i);
      }

      else if(color[u]==color[i])
      return false;
    }
  }
  delete color;
  return true;
}

int main()
{
  $
  long long n,m;
  cin >> n >> m;
  visited = new int[n];

  long long a[n];

  for(int i=0; i<n; i++)
    cin >> a[i];

  int t;
  long long x,y,c;

  list<int>l[n];

  while(m--)
  {
    cin >> t;

    if(t==1)
    {
      cin >> x >> c;
      a[x-1] = c;
    }

    else if(t==2)
    {
      cin >> x >> y;
      l[y-1].push_back(x-1);
      l[x-1].push_back(y-1);
    }

    else
    {
      cin >> x >> y >> c;
      fill_n(visited, n, 0);

      if(!check(n,x-1,l) or !visited[y-1])
      cout << 0 << endl;

      else
      {
        long long num = (c)*a[x-1];
        long long den = a[y-1];
        int temp = -1;
        temp = pow(temp, dist[y-1]);
        long long hcf = __gcd(abs(num), abs(den));
        num = num/hcf;
        den = den/hcf;
        cout << temp*num << "/" << den << endl;
      }
    }
  }
  delete visited;
  delete dist;
	return 0;
}
