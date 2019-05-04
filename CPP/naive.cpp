#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    long long int n,a,b;
    cin>>n>>a>>b;
    long long int x[n];
    int p[n+1]={};
    for(int i=0;i<n;i++)
    {
      cin>>x[i];
      p[x[i]]++;
    }
    p[a]=double(p[a]);
    p[b]=double(p[b]);
    n=double(n);
    printf("%0.6f\n",double(p[a]*p[b])/(n*n) );
  }
  return 0;
}
