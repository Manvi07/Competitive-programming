#include<bits/stdc++.h>
#define MAX 1000000007
using namespace std;

int main()
{
  int t;
  cin>>t;
  while (t--) {
    int n,m;
    cin>>m>>n;
    vector<long long int>a(m);
    vector<long long int>b(m);
    for(int i=0;i<m;i++) {
      cin>>a[i];
    }
    for(int i=0;i<m;i++) {
      cin>>b[i];
    }
    int r=0;
    int fib[max(2,n)];
    for(int i=0;i<m;i++)
    for(int j=0;j<m;j++)
      {
        fib[0]=a[i];
        fib[1]=b[j];
        for(int k=2;k<n;k++)
        fib[k]=fib[k-1]+fib[k-2];
        r=r+fib[n-1];
      }
  cout<<r<<endl;
  }
  return 0;
}
