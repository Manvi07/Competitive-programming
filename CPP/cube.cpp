#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        int a;
        cin >> a;
        int s = a/6;
        int ans = sqrt(s);
        cout << ans << endl;
    }
    return 0;
}