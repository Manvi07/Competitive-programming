#include <bits/stdc++.h>
using namespace std;

int seive(int n)
{
  bool prime[n+1];
    memset(prime, true, sizeof(prime));
    for (int p=2; p*p<=(n); p++)
    {
        if (prime[p] == true)
        {
            for (int i=p*2; i<=(n); i += p)
                prime[i] = false;
        }
    }
    int c=0;
    for (int p=2; p<=n; p++)
       if (prime[p] and n%p==0)
        {cout<<p<<" "; c++;}
        cout<<"---\n"; return c;
}
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int m,n;int ans=0;
    cin>>n>>m;
    for(int i=n;i<m;i++)
    ans+=seive(i);
    cout<<ans<<endl;
  }
  return 0;
}
