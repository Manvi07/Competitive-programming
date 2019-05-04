#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    ll a,b,c;
    cin>>a>>b>>c;
    if((abs((2*b)-(a+c))%2)==0)
    cout<<(abs((2*b)-(a+c)))/2;
    else cout<<((abs((2*b)-(a+c)))/2) +1;
    cout<<endl;
  }
  return 0;
}
