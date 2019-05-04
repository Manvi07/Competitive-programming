#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int a,b,x,c=0;
  cin>>a>>b>>x;
  string s;
  for(int i=0;i<b;i++)
  s+='1';
  if(x==1)
  while(a--)
  s+='0';
  else if(a==1)
  s.insert(1,"0");
  else
  {
    if(x%2==0)
    {
      int q=0, p=0;
      for(int i=0;i<a and c<x;i++)
    {
      s.insert(s.size()-p, "0");
      c++;
      if(p)
      c++;
      p=p+2;
      if(c<x and i<a)
      {
        s.insert(q,"0");i++;
        c=c+1;
        if(q) c++;
        q=q+2;}
    }
    while(s.size()<a+b)
    s.append("0");
    }
    else
    {
      int p=1;
      for(int i=0;i<a and c<x;i++)
        {
          s.insert(s.size()-p,"0");
          c+=2;p=p+2;
          if(x-c==1)
          {
            s.insert(0,"0");
            c++;
          }
        }
        while(s.size()<a+b)
        if(s[s.size()-1]=='0')
        s.append("0");
        else s.insert(0,"0");
    }
  }
  cout<<s<<endl;
  // cout<<s.size()<<endl;
  return 0;
}
