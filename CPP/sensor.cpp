#include <bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
  if(a==0)return b;
  else return gcd(b%a,a);
}
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    long long int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    sort(a,a+n);
    cout<<a[0]*a[1]/gcd(a[0],a[1])<<endl;
  }
  return 0;
}
