#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int s[n],e[n];
  for(int i=0;i<n;i++)
  cin>>s[i]>>e[i];
  int q;
  cin>>q;int val;
  vector <vector<int> >v(q);
  for(int k=0;k<q;k++)
  {int c=0;int h[n]={};
  v[k]=vector<int>(1);cin>>v[k][0];
    v[k].resize(v[k][0]+1);
  for(int j=1;j<=v[k][0];j++)
    {cin>>v[k][j];
    for(int i=0;i<n;i++)
    {
    if(v[k][j]>=s[i] && v[k][j]<=e[i] && h[i]!=1)
    {c++;h[i]=1;}
    }
  }cout<<c<<endl;}
  return 0;
}
