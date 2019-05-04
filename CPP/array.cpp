#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n ;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];int c,w=0;
    for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
    if(i!=j and w==0)
    {
      c=0;
      for(int k=0;k<n;k++)
      if(a[i]*a[j]==a[k])
      c++;
      if(c==0)
      {w=1;cout<<"no\n";break;}
    }if(w==0)
    cout<<"yes\n";
  }
}
