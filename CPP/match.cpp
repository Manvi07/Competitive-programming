#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s;
  string p="";
  cin>>s;
  for(int i=0;i<s.size();i++)
  {
    s[i]=tolower(s[i]);
    if(s[i]!='o' and s[i]!='a' and s[i]!='i' and s[i]!='e' and s[i]!='u' and s[i]!='y')
    {p+=".";p+=s[i];}
  }
  cout<<p<<endl;
}
