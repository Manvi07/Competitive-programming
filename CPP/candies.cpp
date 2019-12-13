#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long a, b, c;
        cin >> a >> b >> c;
        long double sum = a+b+c;
        long long ans = sum/2;
        cout << ans << endl;
    }
}