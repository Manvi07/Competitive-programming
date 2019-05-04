#include<bits/stdc++.h>
using namespace std;
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
    double integral =floor(input);
    double frac = input - integral;

    const long precision = 1000000000;

    long gcd_ = gcd(round(frac * precision), precision);

    long denominator = precision / gcd_;
    long numerator = round(frac * precision) / gcd_;
    numerator=denominator*integral+numerator;
    cout << numerator << " " << denominator << endl;
}
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n,k;
    cin>>n>>k;
    string a;
    cin>>a;int i=n-1;sort(a.begin(),a.end());
    int cn=0;double p=0;float sum=0;
    while((n-cn+float(sum/k))>p && i>=0)
    {
      p=n-cn+(float)(sum/k);
      sum+=float(a[i])-96.00;
      cn++;n--;i--;
      if(n-cn+float(sum/k)<p)break;
    }
    foo(p);
    }
  return 0;
}
