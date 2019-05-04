#include <bits/stdc++.h>
#define $ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main()
{
  $
  int n;
  cin >> n;
  long long a[n];
  set<long long>s;
  map<long long,long long>m;
  for(int i=0;i<n;i++)
  {
    cin >> a[i];
    m[a[i]]++;
    s.insert(a[i]);
  }
  s.erase(s.begin());
  int c=0,k=0;int ans=0;
  // for(map<long long int,long long int>::iterator it=m.begin() ; it!=m.end() ; ++it)
  // {
  //   cout<<it->first<<" "<<it->second<<endl;
  // }
  // for(auto i : s)
  // {
  //   cout<<i<<" ";
  // }
  // cout<<endl;
  for(auto i :s)
  {
    c=0;
    for(map<long long int,long long int>::iterator it=m.begin() ; it!=m.end() ; ++it)
    {
      if(it->first<i)
      {c+=it->second;}
    }
    if(c-k>=m[i])
    {
      ans+=m[i];
      k+=m[i];
    }
    else
    ans+=c-k;
  }
  cout<<ans<<endl;

  return 0;
}
