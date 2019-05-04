#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long int n,m,a,b;
  cin>>n>>m>>a>>b;
  long long int ans=0;
  if(n%m==0)
  ans=0;
  else if(n<m)
  {
    ans =min((b*n),((m-n)*a));
  }
  else
  {
    long long int r=n%m;
    // cout<<r<<endl;
    ans=min((b*r),(a*(m-r)));
  }
  cout<<ans<<endl;
  return 0;
}
