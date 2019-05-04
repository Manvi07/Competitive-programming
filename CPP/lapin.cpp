#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    string s;
    cin>>s;
    int l = s.size();
    int a[26]={0};
    int b[26]={0};
    for(int i=0;i<l/2;i++)
    a[int(s[i]-'a')]++;
    if(l%2==0)
    for(int i = l/2; i<l;i++)
    b[int(s[i]-'a')]++;
    else
    for(int i= l/2+1;i<l;i++)
    b[int(s[i]-'a')]++;
    bool check = true;
    for(int i=0;i<26;i++)
    if(a[i]!=b[i])
    {
      cout<<"NO\n";
      check=false;
      break;
    }
    if(check)
    cout<<"YES\n";
  }
}
