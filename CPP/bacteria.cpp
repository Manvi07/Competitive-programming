#include <bits/stdc++.h>
using namespace std;
int main()
{
  long int n,k;
  cin>>n>>k;
  vector<long long int>a(n);
  for(int i=0;i<n;i++)
  cin>>a[i];
  sort(a.begin(),a.end());
  int p=0;
  while(p)
  {
    p=0;
    for(int i=1;i<a.size();i++)
      {
        if(a[i]-a[i-1]<=k && a[i]>a[i-1])
          {
            p=1;
            a.erase(a.begin()+i-1);
            break;
          }
      }
  }
  cout<<a.size()<<endl;
  return 0;
}
