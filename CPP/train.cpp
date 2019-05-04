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
    string s;
    int ans;
    int r=n%8;
    if(r==1 || r==4)
    s="LB";
    else if(r==2 or r== 5)
    s="MB";
    else if(r==3 or r==6)
    s="UB";
    else if(r==7)
    s="SU";
    else s="SL";
    if(r>=1 and r<4)
    ans=n+3;
    else if(r==4 or r==5 or r==6)
    ans = n-3;
    else if(r==7)
    ans =n+1;
    else ans =n-1;
    cout<<ans<<s<<endl;
  }
  return 0;
}
