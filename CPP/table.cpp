#include <bits/stdc++.h>
#define $ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main()
{
  $
  int t;
  cin >> t;
  long long w, h;
  std::vector<long long> v;
  cin >> w  >> h;
  v.push_back(max(w,h));
  for(int i=1 ;i<t;i++)
  {
    cin >> w >> h;
    if(max(w,h)<=v[i-1])
    v.push_back(max(w,h));
    else
    v.push_back(min(w,h));
  }
  // for(auto i : v)
  // cout<<i<<" ";
  // cout<<endl;
  for(auto i = 1;i<v.size();i++)
  if(v[i-1]<v[i])
  {
    cout<<"NO\n";
    return 0;
  }
  cout<<"YES\n";
  return 0;
}
