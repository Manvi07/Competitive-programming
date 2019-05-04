#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;long long int a[n];
  for(int i=0;i<n;i++)
  cin>>a[i];
  sort(a,a+n);long long int s=0;
  for(int i=0;i<n;i++)
  // for(int j=i+1;j<n;j++)
  s+=(i*a[i])-(n-1-i)*a[i];
  cout<<s<<endl;
  return 0;
}
