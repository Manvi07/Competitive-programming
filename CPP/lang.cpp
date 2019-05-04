#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n,k;
    cin>>n>>k;
    string s[n];int val;
    for(int i=0;i<n;i++)
    cin>>s[i];int c[n]={0};
    vector<vector<string> >v(n);int K=0;
    for(int i=0;i<k;i++)
    {
      cin>>val;string h;
      for(int j=0;j<val;j++)
      {cin>>h;v[i].push_back(h);}
      for(int j=0;j<val;j++)
      for(K=0;K<n;K++)
      {if(c[K]==0 && s[K]==v[i][j]) {c[K]++;}
       }
    }
    for(int i=0;i<n;i++)
    if(c[i]==0)
    cout<<"NO ";else cout<<"YES ";
  cout<<"\n";
  }
  return 0;
}
