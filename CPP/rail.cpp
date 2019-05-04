#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;int s2=0;
    cin>>n;vector<int>a(n);
    for(int i=0;i<n;i++)
    {cin>>a[i];}
    sort(a.begin(),a.end());//cout<<a.size()<<endl;
    int s1;int c=0;
    int l=0,k=n;
  while(!a.empty())
  {
    n=a.size();s2=0;
     s1=a[n-1];
    for(auto i=0;i<n-1;i++)
    {s2+=a[i];}
    if(s2==s1)
    {a.pop_back();c++;}
    else
    {
      k=n;
      while(n>1)
      {
        n--;
        s1+=a[n-1];
        s2-=a[n-1];
        if(s1==s2){for(int i=a.size()-1;i>=n-1;i--)
        {a.pop_back();}c++;}if(l!=c)break;
      }
    }
  if(l==c){break;}
  else l=c;
}
    cout<<c<<endl;
  }
  return 0;
}
