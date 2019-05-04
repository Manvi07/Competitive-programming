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
    int x[n]={};
    int y[n]={};
    int X=0;
    for(int i=0;i<n;i++)
    {
      cin>>x[i]>>y[i];
      X=X^(i+1);
    }
    cout<<X<<endl;
  }
  return 0;
}
