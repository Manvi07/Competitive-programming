#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n,p,h=0,c=0;
    cin>>n>>p;int a[n]={};
    for(int i=0;i<n;i++)
    {cin>>a[i];
    if(a[i]<=p/10)
    h++;
    else if(a[i]>=p/2)
    c++;}
    if(c==1 && h==2)
    std::cout << "yes" << '\n';
    else std::cout << "no" << '\n';
  }
  return 0;
}
