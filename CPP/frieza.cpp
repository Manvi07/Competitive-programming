#include <bits/stdc++.h>
using namespace std;
int main()
{
  int  t;
  cin>>t;
  while(t--)
  {
      string s;
      cin>>s;
      vector<int>v;
      int c=0;
        int i=0;
        while(i<s.size())
        {
            if(s[i]=='f' || s[i]=='r' || s[i]=='i' || s[i]=='e' || s[i]=='z' || s[i]=='a')
          {
            c++;
            i++;
            if(i==s.size() and c)
            {v.push_back(c);break;}
          }

          else
          {
            if(c)
            {v.push_back(c);c=0;}
            while(i<s.size() and !(s[i]=='f' || s[i]=='r' || s[i]=='i' || s[i]=='e' || s[i]=='z' || s[i]=='a'))
            {
              c++;
              i++;
            }
            if(c)
            {v.push_back(c);c=0;}
          }
        }
        for(int i=0;i<v.size();i++)
        cout<<v[i];
        cout<<endl;
  }
  return 0;
}
