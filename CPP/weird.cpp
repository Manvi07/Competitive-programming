#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n,m;
    cin>>n>>m;
    long long int ans;
    int t=min(n,m);
    ans=((t*t)-t)*2;
    if(n!=m)
    {
      int Min=abs(n-m);
      int Max=min(n,m);
      ans+=Min*(Max-1)*2+Min;
    }
    cout<<ans<<endl;
  }
}
