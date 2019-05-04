#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a, d;
        cin >> a >> d;
        long long m, n, p;
        cin >> m >> n >> p;
        if((d + 2*p*sqrt((m*m)+(n*n))) <= a)
        cout << "Possible\n";
        else
        cout << "Impossible\n";
    }
    return 0;
}