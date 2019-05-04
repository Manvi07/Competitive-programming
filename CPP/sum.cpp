#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n,m;
    cin>>n>>m;
    vector<int>v(n*m);
    for(int i=0;i<n*m;i++)
    cin>>v[i];
    sort(v.begin(),v.end());
    int c=0,g=0;
    while(!v.empty())
    {c+=v.back();v.pop_back();
      if(!v.empty())
      {g+=v.back();v.pop_back();}
    }
    if(c>g)cout<<"Cyborg\n";
    else if(g>c)cout<<"Geno\n";
    else cout<<"Draw\n";
  }
  return 0;
}
