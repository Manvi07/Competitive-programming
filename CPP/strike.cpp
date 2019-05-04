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
    int n,p=1;
    cin>>n;
    string s="1";
    for(int i=0;i<n/2;i++)
    s+="0";
    cout<<p<<" "<<s<<endl;
  }
  return 0;
}
