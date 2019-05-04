#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    string s;
    cin>>s;int c=0;
    for(int i=2;i<s.size();i++)
      if(s[i]!=s[i-1] && s[i]==s[i-2])
      c++;
      if((c==s.size()-2 && c!=0)|| s.size()==1 || (s.size()==2 && s[0]!=s[1]))
      cout<<"YES\n";
      else cout<<"NO\n";
  }
  return 0;
}
