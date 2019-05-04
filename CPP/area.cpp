#include <bits/stdc++.h>
using namespace std;

int main()
{
  int l,b;
  cin>>l>>b;
  long long area = l*b;
  long long peri = 2*(l+b);
  if(area>peri)
  {
    cout<<"Area\n";
    cout<<area<<endl;
  }
  else
  {
    cout<<"Peri\n";
    cout<<peri<<endl;
  }
  return 0;
}
