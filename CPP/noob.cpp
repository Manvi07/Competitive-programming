#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  long long int n;
  cin>>n;
  std::vector<long long int> v(n);
  set<int>s;
  set<int>::iterator it;
  for(int i=0;i<n;i++)
    {
      cin>>v[i];
      s.insert(v[i]);
    }
    it=s.begin();
    while(s.size()>1)
    {
      for(int i=0;i<n;i++)
      v[i]=v[i]-*it;
    }
  return 0;
}
