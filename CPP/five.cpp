#include <iostream>
int f(int x)
{
  int c=0;
  while(x%5==0)
  {
    x=x/5;c++;
  }
  return c;
}
int main()
{
  using namespace std;
  int t;
  cin>>t;
  while(t--)
  {
    int n,i=1,s=0;
    cin>>n;
    while(1)
    {
      s+=f(i);
      if(s>=n)
      break;
      else i++;
    }
    printf("%d\n",i);
  }
  return 0;
}
