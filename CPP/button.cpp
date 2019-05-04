#include <bits/stdc++.h>
#define $ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
  $
  int n;
  long long ans=0;
  cin>>n;
  ans=n;
  int i=1;
  while(n-i)
  {
    ans+=i*(n-i);i++;
  }
  cout<<ans<<endl;
}
