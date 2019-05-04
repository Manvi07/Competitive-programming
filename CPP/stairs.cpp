#include <bits/stdc++.h>
#define $ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main()
{
  $
  int n;
  cin>>n;
  vector<int >v;
  int a[n];
  int count =0;
  for(int i=0;i<n ;i++)
  {
    cin>>a[i];
    if(a[i]==1)
    count++;
    if(a[i]==1 and i>0)
    v.push_back(a[i-1]);
  }
  v.push_back(a[n-1]);
  cout<<count<<endl;
  for(auto i : v)
  cout<<i<<" ";
  cout<<endl;
  return 0;
}
