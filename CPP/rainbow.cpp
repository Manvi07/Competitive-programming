#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    int a[n];
    bool f=true;
    set<int>s;
    for(int i=0;i<n;i++)
    {
      cin>>a[i];
      if(a[i]>7 || a[i]<1)
      f=false;
      s.insert(a[i]);
    }
    if(!f || s.size()!=7)
    cout<<"no\n";
    else
    {
      for(int i=0;i<n;i++)
      if(a[i]!=a[n-i-1])
        {
          f=false;
          break;
        }
        if(f)
        cout<<"yes\n";
        else
        cout<<"no\n";
    }
  }
  return 0;
}
