#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int n,m,k;
  cin>>n>>m>>k;
  long long int a[n],p[m];
  for(int i=0;i<n;i++)
  cin>>a[i];
  for(int i=0;i<m;i++)
  cin>>p[i];
  for(int i=0;i<n;i++)
  cout<<a[i]+k-1<<" ";
  cout<<endl;
  return 0;
}
