#include <bits/stdc++.h>
using namespace std;
int *a;
bool check(string s,int k)
{
  vector<int>v;
  vector<char>p(s.size());
  for(int i=0;i<s.size();i++)
  {
    p.push_back(s[i]);
  }

  for(int i=1;p.size()>0 and i<p.size();i++)
  {

    if(p[i]==p[i-1])
    {
      p.erase(p.begin()+i-1);
    }
    if(p.size()<k)
    return false ;
  }

  for(int i=0;i<s.size();i++)
   a[s[i]-(int)'a']++;

  for(int i=0;i<26;i++)
  {
    if(a[i]>0)
    {v.push_back(a[i]);}
  }
  for(int i=1;i<v.size();i++)
  if(v[i]!=v[i-1])
  return false;
  return true;
}

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    a=(int*)malloc(26*sizeof(int));
    string s;
    int k,j;
    cin>>s>>k;
    long long int ans=0;
    for(int j=k;j<s.size();j++)
    {
      for(int i=0;i<s.size() && s.size() -i>=j;i++)
    {
      for(int m=0;m<26;m++)
      a[m]=0;
      string temp=s.substr(i,j);
      if(check(temp,k)==true)
      {ans++;cout<<temp<<endl;}
    }
  }
    std::cout << ans << '\n';
    free(a);
  }
  return 0;
}
