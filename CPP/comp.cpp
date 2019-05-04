#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int f(int a)
{
  if(a==0)
  return 0;
  else if(a==1)
  return 1;
  else return f(a-1)+f(a-2);
}
int main()
{
  int n;
  cin>>n;
  int a[n];
  int i;int c=1,c2=1;
  for(i=0;i<n;i++)
  cin>>a[i];
  sort(a,a+n,greater<int>());
  i=1;
  while(a[i]==a[0])
  {
    c++;
    i++;
  }
  int j=i;
  while(a[j]==a[i])
  {
    c2++;
    i++;
  }
  if(c%2==0 && c2%2==0)
  cout<<"Agasa\n";
  else if(c%2==0 && c2%2!=0) cout<<"Conan\n";
  return 0;
}
