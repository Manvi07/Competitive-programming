#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while (t--) {
    int n;
    cin>>n;int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int m;
    cin>>m;int b[m];
    for(int i=0;i<m;i++)
    cin>>b[i];int j,w=0;
    for(int i=0,j=0;i<n;i++)
    if(b[j]==a[i])
    {
      w++;
      j++;
    }
    if(w==m)
    cout<<"Yes\n";
    else cout<<"No\n";
    }
  return 0;
}
