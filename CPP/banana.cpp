#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;int h;
    cin>>n>>h;
    int a[n];long long int s=0;
    for(int i=0;i<n;i++)
    {cin>>a[i];
    s+=a[i];}
    cout<<1+s/h<<endl;
  }
  return 0;
}
