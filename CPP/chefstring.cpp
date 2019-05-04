#include <bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  vector<char>v(s.size());
  for(int i=0;i<s.size();i++)
  v[i]=s[i];
  std::vector<char> :: iterator it;
  int c=0;
  for(int i=0;i<s.size();i++)
  { int p=0;
    it=find(v.begin(),v.end(),"C");
    if(it!=v.end())
    {
      it=find(it,v.end(),"H");p++;
    }

    if(it!=v.end())
    {
      it=find(it, v.end(),"E");
      p++;
    }
    if(it!=v.end())
    {
      it=find(it, v.end(),"F");p++;
    }
    if(it!=v.end()) p++;
    if(p==4)
    c++;
  }cout<<c<<endl;
}
