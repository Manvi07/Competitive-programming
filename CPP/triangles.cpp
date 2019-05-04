#include<bits/stdc++.h>
using namespace std;

int main()

  {
    long long int n,q;
    cin>>n>>q;
    long long int a[n];long long int p,l,r;
    for(int i=0;i<n;i++)
    cin>>a[i];
    for(int i=0;i<q;i++)
    {
      cin>>p>>l>>r;
      if(p==1)
      a[l-1]=r;
      else if(p==2)
      {
        long long int pm=0;
        for(int i=l-1;i<r;i++)
        for(int j=i+1;j<r;j++)
        for(int k=j+1;k<r;k++)
        if(a[i]+a[j]>a[k] && a[k]+a[j]>a[i] && a[k]+a[i]>a[j] && a[i]+a[k]+a[j]>pm)
        {pm=a[i]+a[j]+a[k];}
        cout<<pm<<endl;
      }
    }
  return 0;
}
