#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;
int main()
{
  int n,k;
  cin>>n>>k;
  int c=0;
  vector<bool>v(n,false);

  char s[10];
  for(int i=0;i<k;i++)
  {
    getchar();
    scanf("%[^\t\n]s",s);
    if(s[5]==' ')
    {
      int t=atoi(s+6);
      if(!v[t-1])
      {
        v[t-1]=true;c++;
      }
      else
      {
        v[t-1]=false;
        c--;
      }
    }
    else
    {
      c=0;
      for(int i=0;i<n;i++)
      v[i]=false;
    }
    cout<<c<<endl;
  }
  return 0;
}
