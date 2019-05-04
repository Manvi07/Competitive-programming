#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    long long int a;
    cin>>a;
    int ans;
    if(a%10==0)
    ans=0;
    else if(a%5!=0)
    ans = -1;
    else ans=1;
    cout<<ans<<endl;
  }
  return 0;
}
