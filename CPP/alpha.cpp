#include <bits/stdc++.h>
using namespace std;

int main()
{
  long long int n,k;
  cin>>n>>k;
  string s;
  cin>>s;
  vector<char>v(n);
  for(int i=0;i<n;i++)
  {
    v[i]=s[i];
  }
  // int c=0;
  for(int i=0;i<k;i++)
  {
    v.erase(min_element(v.begin(),v.end()));
  }
  for(int i=0;i<v.size();i++)
  cout<<v[i];
  cout << '\n';
return 0;
}
