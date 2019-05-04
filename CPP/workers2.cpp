#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int n;
  cin>>n;
  int a[2][n];
  for(int i=0;i<n;i++)
  cin>>a[0][i];
  for(int i=0;i<n;i++)
  cin>>a[1][i];int min=a[0][0]+a[0][1];
  for(int i=0;i<n;i++)
  for(int j=i+1;j<n;j++)
  {
    if(a[1][i]==1 && a[1][j]==2 && a[0][i]+a[0][j]<min || a[1][i]==2 && a[1][j]==1 && a[0][i]+a[0][j]<min)
    {min=a[0][i]+a[0][j];}
  }
  for(int i=0;i<n;i++)
  {
    if(a[0][i]<min && a[1][i]==3)
    {min=a[0][i];}
  }
  cout<<min<<endl;
  return 0;
}
