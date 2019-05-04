#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n,k,s;
    cin>>n>>k>>s;
    int d=s-s/7;int b=0;
    if(k*s>n*d)b=-1;
    else
    {
      while(1){
      b++;
      if(b*n>=k*s)
      break;}
    }
    cout<<b<<endl;
  }
}
