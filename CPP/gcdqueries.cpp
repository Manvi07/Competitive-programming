#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  cin>>a[i];
  int q;cin>>q;int num;
  int x,y,l,r,g,c=0;
  for(int i=0;i<q;i++)
  {
    cin>>num;c=0;
    if(num==1)
    {cin>>x>>y;a[x-1]=y;}
    else{
      cin>>l>>r>>g;
      for(int j=l-1;j<r;j++)
      if(__gcd(g,a[j])==1)
      {c++;}
      cout<<c<<endl;
    }
  }
  return 0;
}
