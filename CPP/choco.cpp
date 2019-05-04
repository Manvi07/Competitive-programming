#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    long long int n,m;
    cin>>n>>m;
    if(n%2==0 || m%2==0)
    cout<< "Yes\n";
    else cout<<"No\n";
  }
  return 0;
}
