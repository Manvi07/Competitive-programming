#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  cin>>n;
  string s;
  cin>>s;
  int ans=0;

    int j,h=0;
    for(int i=0;i<n;i+=max(h,1))
    {
      h=0;
      if(s[i]=='x')
        {
          for(j=i;j<n && s[j]=='x';++j)
            {h++;}
          if(h>=3)
            ans+=h-2;
            else ans+=0;
        }
    }
    cout<<ans<<endl;
    return 0;
}
