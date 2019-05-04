#include <bits/stdc++.h>
#define $ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
  $
  long long n,d;
  cin>>n>>d;
  long long a[n];
  int ans=2;

  for(auto i=0;i<n;i++)
  {
    cin>>a[i];
  }
  sort(a,a+n);
  for(int i=0;i<n-1;i++)
  {
    if(a[i+1]-a[i]>2*d)
    ans+=2;
    if(a[i+1]-a[i]==2*d)
    ans+=1;
  }
  cout<<ans<<endl;
}
