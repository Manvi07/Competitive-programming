#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int n;
  cin>>n;
  int c[n],w[n];
  vector<int>t;
  vector<int>a;
  vector<int>at;
  for(int i=0;i<n;i++)
  cin>>c[i];
  for(int i=0;i<n;i++)
  {
    cin>>w[i];
    if(w[i]==1)
    t.push_back(c[i]);
    else if(w[i]==2)
    a.push_back(c[i]);
    else at.push_back(c[i]);
  }
  int min=a[0]+t[0];
  for(auto i=a.begin();i!=a.end();i++)
  for(auto j=t.begin();j!=t.end();j++)
  if((*i)+(*j)<min)
  min=(*i)+(*j);
  for(auto i=at.begin();i!=at.end();i++)
  if(min>(*i))
  min=*i;
  cout<<min<<endl;
  return 0;
}
