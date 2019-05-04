#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int c=0,n;
    cin>>n;
    string s[n];
    for(int i=0;i<n;i++)
    cin>>s[i];
    for(int i=n-2;i>=0;i--)
    if(s[i]=="cookie" && s[i+1]!="milk")
    c++;
    if(c>0 || s[n-1]=="cookie")cout<<"NO\n";
    else cout<<"YES\n";
  }
  return 0;
}
