#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    long long int c,d;long long int l;
    cin>>c>>d>>l;
    if(l%4!=0)
    cout<<"no\n";
    else if(c==0 && d==0 && l!=0)
    cout << "no" << '\n';
    else if((d==0 && l!=4*c) || (c==0 && l!=4*d))
    cout<<"no\n";
    else if(l>4*(c+d))
    cout<<"no\n";
    else if(l<4*d)
    cout<<"no\n";
    else if(c>=2*d && l<4*(c-d))
    cout<<"no\n";
    else cout<<"yes\n";
  }
  return 0;
}
