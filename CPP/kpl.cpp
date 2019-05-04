#include<bits/stdc++.h>
using namespace std;
int main()
{
  {
    int n,q;
    cin>>n>>q;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int k;int l,r;
    for(int i=0;i<q;i++)
    { 
        cin>>k;int p;
      if(k==1)
      {
        cin>>p;
        if(a[p-1]==0)
        a[p-1]=1;
        else a[p-1]=0;
      }
      else if(k==2)
      {
        int c=0;
        cin>>l>>r;
        for(int j=l-1;j<r-1;j++)
        if(a[j]==0 && j!=0 && j!=n-1 && a[j-1]==1 && a[j+1]==1)
        c++;
        cout<<c+1<<endl;
      }
    }

  }
  return 0;
}
