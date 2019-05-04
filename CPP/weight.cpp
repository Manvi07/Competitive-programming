#include <bits/stdc++.h>
#define ll long long
using namespace std;
long long int max=1000000000+7;

ll power(ll base, ll exponent, long long int modulus)

{

    ll result = 1;

    while (exponent > 0)

    {

        if (exponent % 2 == 1)

            result = (result * base) % modulus;

        exponent = exponent >> 1;

        base = (base * base) % modulus;

    }

    return result;

}
int main()
{
  int t;
  long long int max=1000000000+7;
  cin>>t;
  while(t--)
  {
    long long int n,w;
    cin>>n>>w;

    long long int c=0;
    if(w>=9 or w<-9)
    c=0;
    else
    {
      if(w>=0)
      c=((9-w)%max *(power(10,n-2,max)))%max;
      else
      c=((10+w)%max *(power(10,n-2,max)))%max;
    }
    cout<<c<<endl;
  }
  return 0;
}
