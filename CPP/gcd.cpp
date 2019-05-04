#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    long long int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    sort(a,a+n);
    int k=(a+a+n)/2;
    {
      if(!binary_search(a, a + n, k))
      k=k+1;
      if(!binary_search(a, a + n, k))
      k-=1;
    }
  }
}
