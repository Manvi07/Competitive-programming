#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    string s;
    bool check=true;
    vector<string>v;
    do{
      cin>>s;
      v.push_back(s);
      if(cin.get()=='\n')
      check=false;
    }    while(check);
    int n=v.size();
    if(n==1)
    {v[0][0]=toupper(v[0][0]);
    for(int i=1;i<v[0].size();i++)
    v[0][i]=tolower(v[0][i]);
    cout<<v[0]<<endl;}
    else
    {
      for(int i=0;i<v.size()-1;i++)
      {
        v[i][0]=toupper(v[i][0]);
        v[i][1]='.';
        v[i].resize(2);
      }
      v[v.size()-1][0]=toupper(v[v.size()-1][0]);
      for(int i=1;i<v[v.size()-1].size();i++)
      v[v.size()-1][i]=tolower(v[v.size()-1][i]);
      for(int i=0;i<v.size();i++)
      cout<<v[i]<< " ";
      cout<<endl;
    }

  }
  return 0;
}
