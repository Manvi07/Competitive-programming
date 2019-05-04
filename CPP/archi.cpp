#include <bits/stdc++.h>
using namespace std;
#define ll long long int


int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    ll a,b,n;int ans;
    cin>>a>>b>>n;
    if((a>0 and b>0) || ((a<0 || b<0) and n%2!=0))
    {
      if(a>b)ans =1;
      else if(a==b)
      ans=0;
      else ans=2;
    }
    else if(n%2==0 and (a<0 || b<0))
    {
      if(abs(a)>abs(b))ans =1;
      else if(abs(a)==abs(b))ans =0;
      else ans=2;
    }
    else if(a==0 || b==0)
    {
      if(a==0 and b>0)
      {
        ans = 2;
      }
      else if(a==0 and b<0)
      {
        if(n%2==0)
        ans=2;
        else ans=1;
      }
      else if(b==0 and a>0)
      {
        ans =1;
      }
      else if(b==0 and a<0)
      {
        if(n%2==0)
        ans = 1;
        else ans = 2;
      }
      else ans=0;
    }

    cout<<ans<<endl;
  }
  return 0;
}
