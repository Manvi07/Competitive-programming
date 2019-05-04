#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int a[n];
  int i;
  for(i=0;i<n;i++)
  cin>>a[i];
  sort(a,a+n);
  for(i=n-1;i>=0;i--)
  if((float)sqrt(a[i])!=(int)sqrt(a[i]))
  {cout<<a[i]<<endl;break;}
  return 0;
}
