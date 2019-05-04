#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n,m,x,k;
    cin>>n>>m>>x>>k;
    char a[k];int ce=0,co=0;
    for(int i=0;i<k;i++)
    {cin>>a[i];
      if(a[i]=='E')
      ce++;
      else co++;
    }
    int p=0;int t=0;int w=0;
    while(m>0)
    {
      if(p>=n)
      {w=1;cout<<"yes\n";break;}
      if(co>0)
      {
        if(co<=x)
        p+=co;
        else p+=x;
        co=co-x;
      }
      if(p>=n)
      {w=1;cout<<"yes\n";break;}
      m--;
      if(ce>0 && m>0)
      {
        if(ce<=x)
        p+=ce;
        else p+=x;
        ce=ce-x;
      }
      if(p>=n)
      {w=1;cout<<"yes\n";break;}
      if(p==t){w=1;cout<<"no\n";break;}
      t=p;
      m--;
    }
    if(w==0)
    cout<<"no\n";
  }
  return 0;
}
