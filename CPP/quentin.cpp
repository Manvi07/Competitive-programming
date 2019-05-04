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
    int a[505]={};
    int p[n];
    for(int i=0;i<n;i++)
    {
      cin>>p[i];
      a[p[i]]++;
    }
    int y=0;a[0]=1;
    for(int i=0;i<505 && y==0;i++)
    if(a[i]>1)
    {y=3;}
    else if(i>0 && a[i]==1 && a[i-1]==0)
    y=2;
    if(y!=0 || is_sorted(p,p+n))cout <<"no"<< '\n';
    else cout<<"yes"<< '\n';
  }
  return 0;
}
