#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    uint64_t n, a, b, k;
    while(t--)
    {
        cin >> n >> a >> b >> k;
        uint64_t lcm = (a*b)/__gcd(a, b);
        uint64_t g = n/a;
        uint64_t h = n/b;
        uint64_t q = n/lcm;
        // cout << g+h-2*q << endl;
        if(g+h-2*q >= k)
        cout << "Win\n";
        else
        cout << "Lose\n";
    }
    return 0;
}