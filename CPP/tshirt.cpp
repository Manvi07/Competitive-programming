#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;
  string s1[n];
  vector<bool>v(n,false);
  for(int i=0;i<n;i++)
  cin>>s1[i];
  string s2[n];
  long int ans=0;
  for(int i=0;i<n;i++)
  {
    cin>>s2[i];
    int t=0;
      for(int j=0;j<n;j++)
      if(s2[i].size()==s1[j].size())
      {
        int c=0;
        for(int k=0;k<s2[i].size();k++)
        if(s2[i][k]==s1[j][k] and v[j]==false)
        c++;
        t=max(c,t);
        if(t==s2[i].size())
        {
          v[j]=true; break;
        }
      }
      ans+=s2[i].size()-t;
  }
cout<<ans<<endl;
return 0;
}
