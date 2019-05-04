#include <bits/stdc++.h>
using namespace std;

int seive(int n)
{
  bool a[n+1];
  long long int c=0;
  memset(a,true,sizeof(a));
  for(int i=2;i*i<=n;i++)
  {
    if(a[i]==true)
    {
      for(int j=2*i;j<=n ;j=j+i)
      a[j]=false;
    }
  }
  for(int i=2;i<=n-4;i++)
   if(a[i] and (n-i)%2==0 and a[(n-i)/2]==true)
    {
      c++;
    }
  return c;
}

int main()
{
    long int t;cin>>t;
    while(t--)
    {
      int n;
      long long int ans=0;
      cin>>n;
      if(n<=5 || n%2==0)
      ans=0;
      else
      {
        ans=seive(n);
      }
      cout<<ans<<endl;
    }
    return 0;
}
