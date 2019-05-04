#include <bits/stdc++.h>
using namespace std;
int f(int a)
{
  long long h;
  h=a*(a-1)/2;
  return h;
}
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n,m;
    cin>>n>>m;
    string s[n];
    for(int i=0;i<n;i++)
    {
      cin>>s[i];
    }
int cp;long long c=0;
    for(int j=0;j<m+1;j++)
    {cp=0;for(int i=0;i<=n;i++)
    if(s[i][j]=='1')
    cp++;
    if(cp>1)
    c+=f(cp);}
    cout<<c<<endl;
  }return 0;
}
