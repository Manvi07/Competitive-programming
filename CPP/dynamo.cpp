#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, grade;
        unsigned long long a, s, b, c, d, e;
        cin >> n >> a;
        s = pow(10, n)*2 + a;
        cout << s << endl;
        cin >> b;
        c = pow(10, n) - b;
        cout << c << endl;
        cin >> d;
        e = pow(10, n) - d;
        cout << e << endl;
        cin >> grade;
        if(grade == -1)
        break;
    }
    return 0;
}