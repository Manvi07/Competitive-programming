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
    int a[n];a[0]=1;
    for(int i=1;i<n;i++)
    a[i]=a[i-1]+5;
    for(int i=0;i<n-1;i++)
    cout<<a[i]<<" ";cout<<a[n-1]<<endl;
  }
  return 0;
}
