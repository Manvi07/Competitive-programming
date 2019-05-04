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
    long long int c=0;
    int flag=0;
    vector<long long int>a(n);
    vector<long long int>b(n);
    for(int i=0;i<n;i++)
    cin>>a[i];
    for(int i=0;i<n;i++)
    {cin>>b[i];if(b[i]>a[i])flag=1;}
    if(flag)
    cout<<"-1\n";
    else
    {
      while(1)
      {
        int t=0;
        for(int i=0;i<n;i++)
      if(a[i]!=b[i])
    {
      int k=b[i];
      c++;int j=i;
      while(b[j]<=k && a[j]>b[j] && k<=a[j])
      {a[j]=k;
        j++;}
      t+=1;
    }
    if(!t)break;
  }
    cout<<c<<endl;}
  }
return 0;
}
 
