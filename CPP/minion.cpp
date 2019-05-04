#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int sum=0,v[n]={};
    for(int i=0;i<n;i++)
    {
      sum=0;
      for(int j=i+1;j<n;j++)
      {sum+=a[j];
    }
    cout<<endl;}
    return 0;
}
