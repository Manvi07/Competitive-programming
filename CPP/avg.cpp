#include<bits/stdc++.h>
using namespace std;
bool find(int g, vector<int>v)
{
  for(auto i=v.begin();i!=v.end();i++)
  if(*i==g)
  return true;
  return false;
}
int main(int argc, char const *argv[])
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    int val;
    vector<int>e;
    vector<int>o;
    for(int i=0;i<n;i++)
  {  cin>>val;
    if(val%2==0)
    e.push_back(val);
    else o.push_back(val);
  }
  int c=0;
  for(auto i=e.begin();i!=e.end();i++)
  for(auto j=i+1;j!=e.end();j++)
   {int h=((*i)+(*j))/2;
     if(find(h,e) || find(h,o))
     c++;}
  for(auto i=o.begin();i!=o.end();i++)
  for(auto j=i+1;j!=o.end();j++)
{int h=((*i)+(*j))/2;
  if(find(h,o) || find(h,e))
  c++;}
  cout<<c<<endl;}
  return 0;
}
 
