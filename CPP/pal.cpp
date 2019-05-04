#include <bits/stdc++.h>
using namespace std;
bool pal(deque<char>v){
  for(int i=0;i<v.size();i++)
  if(v[i]!=v[v.size()-1-i])
  return false;
  return true;
}
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    string s;
    cin>>s;
    deque<char>v;
    for(int i=0;i<s.size();i++)
    v.push_back(s[i]);
    int ans=0;
    int c=0;
    while(c<v.size())
    {
      char ch=v.front();
      v.pop_front();
      v.push_back(ch);
      if(pal(v))
      {ans++;}
      c++;
    }
    std::cout << ans << '\n';
  }
}
