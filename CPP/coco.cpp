#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long x, y, z, sum=0, n=0, ans=0;
    
    cin >> x >> y >>z;
    sum = x+y;
    n = sum/z;
    if(n > (x/z) + (y/z))
    {
        ans = min(z - x%z, z - y%z);
    }    
    cout << n << " " << ans << endl;
    return 0;
}