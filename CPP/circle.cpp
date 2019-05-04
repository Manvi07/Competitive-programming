#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        long long a, b, d;
        cin >> a >> b >> d;
        long long  ans = d*d/2;
        if(d%2==0)
        cout << ans << endl;
        else{
            cout << ans << ".5" << endl;
        }
    }
    return 0;
}