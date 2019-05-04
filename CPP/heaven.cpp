#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    float n,v1,v2;
    cin>>n>>v1>>v2;
    float s=n*sqrt(2.0)/v1;
    float e=(2.0*n)/v2;//cout<<s<<" "<<e<<endl;
    if(s>e)
    cout<<"Elevator\n";
    else cout<<"Stairs\n";
  }
  return 0;
}
