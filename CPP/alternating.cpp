#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  int t;
  cin>>t;
  while(t--)
  {
    int n,k=0;
    cin>>n;
    int a[n],p[n]={};
    for(int i=0;i<n;i++)
    cin>>a[i];
    for(int i=0;i<n-1;i++)
    {
      p[i]=1;
      k=i;
      while(a[k]*a[k+1]<0 && k<n-1)
      {
        k++;p[i]++;
      }

    }p[n-1]=1;
    for(int i=0;i<n;i++)
    cout<<p[i]<<" ";
    cout<<endl;
  }
  return 0;
}
