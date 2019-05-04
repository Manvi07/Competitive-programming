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
    long long int x=0;
    for(int i=0;i<n;i++)
    {
      cin>>a[i];
      x=x^a[i];
    }
    cout<<x*2<<endl;
  }
  return 0;
}
