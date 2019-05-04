#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    long long int k,n;
    cin>>n>>k;
    int C=0,a[n];
    long long int s=0;
    for(int i=0;i<n;i++)
    {cin>>a[i];s+=a[i];}
    for(int i=0;i<n;i++)
    if(a[i]+k>s-a[i])
    C++;
    cout<<C<<endl;
  }
  return 0;
}
