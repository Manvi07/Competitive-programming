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
    int l[n],r[n];
    for(int i=0;i<n;i++)
    cin>>l[i]>>r[i];
    int q;
    cin>>q;
    vector<vector<int> >v(q);
    for(int i=0;i<q;i++)
    {
      int val,ct=0;
        int d;
      cin>>val;
      v[i].push_back(val);
      for(int j=0;j<val;j++)
      {
        cin>>d;
        v[i].push_back(d);
      }
      for(int k=0;k<n;k++)
      {int c=0;
        for(int j=1;j<v[i].size();j++)
        if(v[i][j]>=l[k] && v[i][j]<=r[k])
        c++;
        if(c%2!=0)
        ct++;
      }cout<<ct<<endl;
    }
  }
  return 0;
}
