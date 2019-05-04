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
    int c[n],l[n],d[n];
    for(int i=0;i<n;i++)
    cin>>c[i]>>l[i]>>d[i];
    int m1=0,m2=0,m3=0;
    int k1=1000,k2=1000,k3=1000;
    for(int i=0;i<n;i++)
    if(l[i]==1 && (m1<d[i] || (m1==d[i] && k1>c[i])))
    {m1=d[i];k1=c[i];}
    else if(l[i]==2 && (m2<d[i] || (m2==d[i] && k2>c[i])))
    {m2=d[i];k2=c[i];}
    else if(l[i]==3 && (m3<d[i] || (m3==d[i] && k3>c[i])))
    {m3=d[i];k3=c[i];}
    cout<<m1<<" "<<k1<<endl;
    cout<<m2<<" "<<k2<<endl;
    cout<<m3<<" "<<k3<<endl;
  }
  return 0;
}
