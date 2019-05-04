#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int c[26]={};
    string s;
    cin>>s;
    for(auto i=0;i<s.length();i++)
    if(s[i]>='a' && s[i]<='z')
    {int x=s[i]-'a';
    c[x]++;}
    int codd=0;
    for(int i=0;i<26;i++)
    {
      if(c[i]%2!=0)
      codd++;
    }
    if(codd>1){cout<<"-1\n";}

  else
  {
      vector<vector<int> >v(26);
      vector<int >vo;
      for(int x=0;x<26;x++)
      {
        if(c[x]!=0 && c[x]%2==0)
        {
          int loc=s.find(x+'a');
          while(loc!=string::npos)
          {
            v[x].push_back(loc);
            loc=s.find(x+'a',loc+1);
          }
        }
        else if(c[x]%2!=0)
        {
          int loc=s.find(x+'a');
          while(loc!=string::npos)
          {
            vo.push_back(loc);
            loc=s.find(x+'a',loc+1);
          }
        }
      }
        for(int x=0;x<26;x++)
        if(c[x]>0)
        {for(auto j=0;j<(v[x].size())/2;j++)
        cout<<v[x][j]+1<<" ";}
        if(codd==1)
        {for(auto j=0;j<vo.size();j++)
        cout<<vo[j]+1<<" ";
        }
        for(int x=25;x>=0;x--)
        if(c[x]>0){for(auto j=(v[x].size())/2;j<(v[x].size());j++)
        cout<<v[x][j]+1<<" ";}
        cout<<endl;
    }
  }
  return 0;
}
