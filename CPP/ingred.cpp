#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n, k;
        cin >> n >> k;
        long long ans = k-1;
        int i=1;
        long long p1 = n+k-1;
        long long t1 = p1, t2 = 2*k;
        while(t1<t2)
        {
            ans += t2 - t1 -1;
            i++;
            t1 = p1*i;
            t2 = k*(1+i);
        }
        cout << ans << endl;
    }
    return 0;
}