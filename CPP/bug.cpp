#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  int p=1;
  while(t--)
  {
    long long int n,e;
    cin>>n>>e;
    int v1[e],v2[e];
    set<long int>s;
    long int temp=0;
    bool ans=true;
    for(int i=0;i<e;i++)
      {
        cin>>v1[i]>>v2[i];
        if(i and s.size()-temp==1)
        {
          ans=false;
        }
        temp=s.size();//cout<<temp<<" "<<s.size()<<endl;
        s.insert(v1[i]);
        s.insert(v2[i]);
      }
      if(s.size()-temp==1)
      {
        ans=false;
      }
      printf("Scenario #%d:\n",p);
      p++;
    if(ans)
    printf("No suspicious bugs found!\n" );
    else
    printf("Suspicious bugs found!\n" );
  }
  return 0;
}
