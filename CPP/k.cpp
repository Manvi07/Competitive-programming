#include <bits/stdc++.h>
using namespace std;
long long int f(int n,int k)
{
  if(n<=k)
  return 1;
  else{int a=0;
    for(int i=n-1;i>=n-k;i--) a+=f(i,k);return a;
  }
}
int main()
{
  long long int m=1000000007;
  int n,k;
  cin>>n>>k;
  cout<<(f(n,k))%m<<endl;
}
