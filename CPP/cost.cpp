#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
int t;
cin>>t;
while(t--)
{
  int n,k;long long int m=1000000007 ;
  cin>>n>>k;
  long long int a[n];
  for(int i=0;i<n;i++)
  cin>>a[i];
  long long unsigned int c=0;
  for(int i=0;i<n;i++)
  for(int j=i+1;j<n;j++)
  c+=((long long int)pow(abs(a[i]-a[j]),k))%m;
  cout<<(2*c)%m<<endl;
}
  return 0;
}
