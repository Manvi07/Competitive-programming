#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);cout.tie(NULL);
  int n,k;
  cin>>n>>k;
  double a[n],avg,sum=0;
  cin>>a[0];
  for(int i=1;i<n;i++)
    {cin>>a[i];a[i]=a[i-1]+a[i];}
  double max=0;
  for(int i=k;i<=n;i++)
  {
    for(int j=0;j<=n-i;j++)
    {
      sum=a[j+i-1]-a[j-1];
      // cout<<sum<<"/"<<i<<endl;
      avg=sum/double(i);
      if(max<avg)
      max=avg;
    }
  }
  printf("%0.8lf\n",max );
  return 0;
}
