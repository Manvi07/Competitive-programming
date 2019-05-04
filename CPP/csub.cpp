#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);cout.tie(NULL);
  int t;
  cin>>t;
  while(t--)
  {
    cin.ignore();
    int n,c=0;
    cin>>n;
    string s;
    cin>>s;
    for(auto i: s)
    if(i=='1')
    c++;
    cout<<c+(c*(c-1)/2)<<endl;
  }
  return 0;
}
