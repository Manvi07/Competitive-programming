#include <bits/stdc++.h>
using namespace std;



int main()
{
    int q;
    cin >>q;
    long long n;
    while(q--)
    {
        int a, b;
        long long ans=0;
        cin >> n >> a >> b;
        if(n%2 == 0)
        {
            ans = min(a*n, b*(n/2));
        }
        else
        {
            ans = min(a*n, a + b*(n/2));
        }
        cout << ans << endl;
    }
    return 0;
}