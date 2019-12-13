#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long m, n, p;
    cin >> m >> n >> p;
    long long ans = 0;
    if(m%n == 0)
    {
        ans = p +1;
    }
    else if(__gcd(m, n) > 1 and n%m != 0)
    {
        ans = p/__gcd(m, n) +1;
    }
    else if(n%m == 0)
    {
        ans = p/(n/m) + 1;
    }
    else
    {
        ans = p/n + 1;
    }
    cout << ans << endl;
    return 0;
}