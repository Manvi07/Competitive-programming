#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        long long L, v, l, r;
        cin >> L >> v >> l >> r;
        long long ans = 0;
        ans = l/v;
        if(l%v == 0)
        ans = l/v -1;
        ans += L/v - r/v;
        cout << ans << endl;
    }
    return 0;
}