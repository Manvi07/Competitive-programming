#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n,m;
  cin>>n>>m;
  long long int a[n],b[m];
  for(int i=0;i<n;i++)
    cin>>a[i];
  for(int i=1;i<n;i++)
    a[i]=a[i]+a[i-1];
  for(int i=0;i<m;i++)
  {
    int k;
    cin>>b[i];
    for(int j=0;j<n;j++)
    if(a[j]>=b[i])
    {k=j;break;}
    if(k>0)
    cout<<k+1<<" "<<b[i]-a[k-1]<<endl;
    else cout<<k+1<<" "<<b[i]<<endl;
  }
  return 0;
}
