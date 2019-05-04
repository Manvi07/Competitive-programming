#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    vector<long long int>a(n);
    for(int i=0;i<n;i++)
    cin>>a[i];
    int p[n]={};
    int c=0;
    if(a[1]>a[0])
    {
      p[0]=1;
      c++;
    }
    if(a[n-1]<a[n-2])
    {
      c++;
      p[n-1]=1;
    }

    for(int i=1;i<n-1;i++)
    if(a[i]<a[i-1] && a[i]<a[i+1])
    {
      c++;
      p[i]=1;
    }
    int j=0;
    for(int i=0;i<n;i=j)
    {
      if(p[i]==1)
      {
        printf("%lld has p[i]\n",a[i] );
        j=i+1;
        int sum=0;
        while(p[j]==0 and j<n)
        {
          sum+=a[j];
          j++;
        }
        printf("%d=sum\n",sum );
        if(sum>abs(a[i])+a[j] and j<n)
      {
        a[i]=(-1)*abs(a[i]);
        a[j]=(-1)*a[j];
      }
      if(j==n and sum>abs(a[i]))
      a[i]=-abs(a[i]);
      }
      else j++;
    }
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    cout<<endl;
  }
  return 0;
}
