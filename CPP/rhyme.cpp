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
    char a=0,I=0,o=0,e=0,u=0;
    string s[n];
    for(int i=0;i<n;i++)
    {cin>>s[i];int v=0;
      for(int j=s[i].length()-1;j>=0 && v==0;j--)
      if(s[i][j]=='a')
      {a++;v=1;}
      else if(s[i][j]=='e')
      {e++;v=1;}
      else if(s[i][j]=='i')
      {I++;v=1;}
      else if(s[i][j]=='o')
      {o++;v=1;}
      else if(s[i][j]=='u')
      {u++;v=1;}
  }
  int c=0;
  if(a%2==0)
  c=c+a;
  if(I%2==0)
  c+=I;
  if(u%2==0)
  c+=u;
  if(e%2==0)
  c+=e;
  if(o%2==0)
  c+=o;
  cout<<c<<endl;
}
return 0;
}
