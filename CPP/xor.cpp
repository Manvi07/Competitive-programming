#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n,q;
  cin>>n>>q;
  int a[n];long long int s2=0,s=0;
  for(int i=0;i<n;i++)
  {cin>>a[i];s+=0^a[i];}
  int l[n],r[n];
  for(int i=0;i<q;i++)
  {cin>>l[i]>>r[i];
auto x=1;
  for(x=1;x<pow(2,31);x++)
  {for(int j=l[i]-1;j<r[i];j++)
  s2+=(a[j]^x);if(s2>s)s=s2;}
  cout<<x<<endl;}
  return 0;
}
