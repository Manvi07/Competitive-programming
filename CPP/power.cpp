#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin>>t;
  while(t--)
  {
    long long int y,n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    long long int ans=0;
    long long int j=1;
    for(int i=0;j<n;i++)
    {
      if(i<n-k)
      {
        if(k<=i+1)
        y=k;
        else y=i+1;
      }
      else
      {
        if(y>1)
          y=y-1;
        else
          y=1;
      }
          // cout<<"i="<<i<<" y="<<y<<endl;
      ans+=y*abs(int(s[i]-s[j]));
      j++;
    }
    cout<<ans<<endl;
  }
  return 0;
}
