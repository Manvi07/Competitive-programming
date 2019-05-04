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
    int d;
    int a[105]={};
    int c=0;
    for(int i=0;i<n;i++)
    {cin>>d;a[d]++;}
    for(int i=0;i<105;i++)
    if(a[i]>0)c++;
    cout<<c<<endl;
  }
  return 0;
}
