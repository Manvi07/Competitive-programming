#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    vector<int>l(n);
    vector<int>::iterator ip;
    int h;
    for(int i=0;i<n;i++)
    {
      cin>>l[i];
    }
    sort(l.begin(),l.begin()+n);
    ip=unique(l.begin(),l.begin()+n);
    l.resize(distance(l.begin(),ip));
    cout<<n-l.size()<<endl;
  }
  return 0;
}
