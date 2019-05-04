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
    int a[1005]={};int p;
    for(int i=0;i<n;i++)
    {cin>>p;a[p]++;}
    int c=0;
    vector<int>v;
    for(int i=0;i<1005;i++)
    if(a[i]>=2)
    {v.push_back(i);c++;}
    if(c<2)
    cout<<"-1\n";
    else
    {
      int l=v.back();v.pop_back();
      int h=v.back();
      cout<<l*h<<endl;
    }
  }
  return 0;
}
