#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  int t;
  cin >> t;
  while (t--)
  {
    int n,k;
    long long int a,sum=0;
    cin >> n >> k;
    map<long long int ,long long int >m;
    for(int i=0;i<n;i++)
    {
      cin >> a;
       m[a]++;
    }
    bool s=false;
    for(map<long long int,long long int>::iterator it=m.begin() ; it!=m.end() ; ++it)
      {
        //cout<<it->first << " " << it->second<<endl;
        if(it->second==k)
        {s=true;sum+=it->first;}
      }

    if(s)
      cout<< sum <<endl;
    else
      cout<<-1<<endl;
  }
  return 0;
}
