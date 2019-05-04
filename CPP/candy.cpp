#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n,c;
    cin>>n>>c;
    int a[n];int s=0;
    for(int i=0;i<n;i++)
    {cin>>a[i];s+=a[i];}
    if(c>=s)
    cout<<"Yes\n";
    else cout<<"No\n";
  }
  return 0;
}
