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
    int v[n][2];
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<2;j++)
    cin>>v[i][j];}
    int t=0;
    for(int i=0;i<n;i++)
    {
      if(v[i][1]>0 && t>=v[i][0])
      {t++;cout<<t<<" ";}
      else if(v[i][1]>0 && t<v[i][0]) {t++;cout<<v[i][0]<<" ";}
      else cout<<"0 ";
      if(v[i][1]>0)
      {for(int j=0;j<n;j++)
      if(j!=i && v[i][0]<=t)
      v[j][1]--;}
    }
    cout<<endl;
  }
}
