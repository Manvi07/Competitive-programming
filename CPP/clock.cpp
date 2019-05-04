#include <bits/stdc++.h>
using namespace std;
// int modInverse(int a, long int m)
// {
//     a = a%m;
//     for (int x=1; x<m; x++)
//        if ((a*x) % m == 1)
//           return x;
// }
long gcd(long a, long b)
{
    if (a == 0)
        return b;
    else if (b == 0)
        return a;

    if (a < b)
        return gcd(a, b % a);
    else
        return gcd(b, a % b);
}
void foo(double input)
{
    std::setprecision(5);
    double integral = std::floor(input);
    double frac = input - integral;
    const long precision = 10;
    long gcd_ = gcd(round(frac * precision), precision);
    long denominator = precision / gcd_;
    long numerator = round(frac * precision) / gcd_;
    numerator=numerator+ integral*denominator;
    const long int m=1000000007;
    // int r=modInverse(denominator,m);
    //cout<<numerator<<"/"<<denominator<<endl;
    if(numerator>=0)cout<<numerator<< std::endl;
    else cout<<m+numerator<<endl;
}
int main(int argc, char const *argv[])
{
int t;
cin>>t;
while(t--)
{
  int l,d,t;
  cin>>l>>d>>t;
  float angle=fmod(t*(acos((float)d/l)),360);
  foo(l*cos(angle));
}
  return 0;
}
