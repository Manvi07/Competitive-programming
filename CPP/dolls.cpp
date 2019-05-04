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
    int a;int p[100004]={};
    for(int i=0;i<n;i++)
    {cin>>a; p[a]++;}
    for(int i=0;i<=100000;i++)
    if(p[i]%2!=0)
    cout<<i<<endl;
  }
  return 0;
}
