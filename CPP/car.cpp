#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    int a[n],b[n];float sum=0;
    for(int i=0;i<n;i++)
    {cin>>a[i];sum+=a[i];}
    int c,d,s;
    cin>>c>>d>>s;
    long double cfa=a[0],cfb=2*a[0];
    for(int i=1;i<n;i++)
    {
      cfa+=a[i];
      if(cfa<=cfb)
      b[i]=a[i];
      else b[i]=a[i]+cfa-cfb;
      cfb+=b[i];
    }
    printf("%Lf\n",(c-1)*(cfb-cfa));
  }
  return 0;
}
