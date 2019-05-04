#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while (t--) {
    int n;
    cin>>n;
    int l[n];
    int g[n];
    for(int i=0;i<n;i++)
    cin>>l[i];int c2=0,c=0;
    for(int i=0;i<n;i++)
    cin>>g[i];
    for(int i=0;i<n;i++)
    {if(g[i]>=l[i])
    c++;
  if(g[n-i-1]>=l[i])c2++;}
    if(c==n && c2==n)
    cout<<"both";
    else if(c==n)
    cout<<"front";
    else if(c2==n)
    cout<<"back";
    else cout<<"none";
    cout<<endl;
  }
  return 0;
}
