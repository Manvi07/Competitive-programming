#include <bits/stdc++.h>
using namespace std;

bool compare(int a[3],int b[3])
{
  if((a[0]>=b[0] and a[1]>=b[1] and a[2]>=b[2]) and (a[0]>b[0] || a[1]>b[1] || a[2]>b[2]))
  return true;
  else if((a[0]<=b[0] and a[1]<=b[1] and a[2]<=b[2]) and (a[0]<b[0] || b[1]>a[1] || b[2]>a[2]))
  return true;
  else return false;
}
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int a[3][3];
    for(int i=0;i<3;i++)
    {
      for(int j=0;j<3;j++)
      {
        cin>>a[i][j];
      }
    }
    if(compare(a[0],a[1]) and compare(a[1],a[2]) and compare(a[2],a[0]))
    cout<<"yes\n";
    else cout<<"no\n";
  }
    return 0;
}
