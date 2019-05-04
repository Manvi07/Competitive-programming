#include <bits/stdc++.h>
#define $ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

bool vowel(char c)
{
  if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
  return true;
  return false;
}

int main()
{
  string s;
  cin >> s;
  for(int i=0;i<s.size();i++)
  {
    if(i>0 and !vowel(s[i-1]) and s[i-1]!='n' and !vowel(s[i]))
    {
      cout<<"NO\n";
      return 0;
    }
  }
  if(!vowel(s[s.size()-1]) and s[s.size()-1]!='n')
  {
    cout<<"NO\n";
    return 0;
  }
  cout<<"YES\n";
  return 0;
}
