#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n,s,y;
    cin>>n>>s>>y;
    vector<long double >v(n);
    for(int i=0;i<n;i++)
    cin>>v[i];
    vector<long double>p(n);
    vector<long double>d(n);
    for(int i=0;i<n;i++)
    cin>>d[i];
    for(int i=0;i<n;i++)
    cin>>p[i];
    vector<long double>c(n);
    for(int i=0;i<n;i++)
    cin>>c[i];
    long double t=0.0;
    for(auto i=0;i<n;++i)
    {
      long double time_prev=t;
    if((p[i]>0 and d[i]) || (p[i]<0 and !d[i]))
      {
        if(abs(p[i])<c[i])
        t+=(long double)(y)/(long double)(s)+(long double)((long double)(c[i]-abs(p[i]))/(long double)v[i]);
        else
        t+=(long double)(y)/(long double)(s);}
      else if(p[i]==0)
      {
        t+=(long double)(y)/(long double)(s)+(long double)((long double)(abs(p[i])+c[i])/(long double)v[i]);
      }
      else
      {
        if((long double)((long double)(abs(p[i]))/(long double)v[i])-(long double)(y)/(long double)(s)>0.000001)
        t+=(long double)(y)/(long double)(s);
        else
        t+=(long double)(y)/(long double)(s)+(long double)((long double)(abs(p[i])+c[i])/(long double)v[i]);
      }
        for(auto j=i+1;j<n;j++)
        if(!d[j])
        {p[j]=(long double)p[j]-((long double)v[j]*(long double)(t-time_prev));}
        else
        p[j]=((long double)(v[j])*(long double)(t-time_prev))+(long double)p[j];
    }
    printf("%.6Lf\n",t );
  }
  return 0;
}
