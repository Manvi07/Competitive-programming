#include <bits/stdc++.h>
#define $ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main()
{
  $
  int t;
  cin>>t;
  while(t--)
  {
    int n,m;
    long long c=0;
    cin>>n>>m;
    int a[n];
    for(int i=0;i<n;i++)
    {
      cin>>a[i];
      if(a[i]%m==0)
      {
        c++;
      }
    }
    long long k=pow(2,c)-1;
    cout<<k<<endl;
  }
  return 0;
}
