#include<bits/stdc++.h>
using namespace std;
struct data {
  long long int d;
  int c;
};

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n,k;
    cin>>n>>k;
    long long int sum=0;
    struct data p[n];
    long long int a[n];
    for(int i=0;i<n;i++)
    {cin>>a[i];p[i].c=0;}
    int j=-1;
    for(int i=0;i<n;i++)
    {int m=0;
      for(int k=j;k>=0 && m==0;k--)
      if(a[i]==p[k].d)
      {p[k].c++;m=1;}
      if(m==0)
      {
        j++;
        p[j].d=a[i];
        p[j].c++;
      }
    }
for(int i=0;i<n;i++)
if(p[i].c==k)
{sum+=p[i].d;}
if(sum==0 && k!=0)
sum=-1;
cout<<sum<<endl;
  }
  return 0;
}
