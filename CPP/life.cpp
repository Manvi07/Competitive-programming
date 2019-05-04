#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    string a, b, c;
    while(t--)
    {
        cin >> a >> b >> c;
        if((a[0] == 'l' and b[0] == 'l' and b[1] == 'l') or (a[1] == 'l' and b[1] == 'l' and b[2] == 'l') or (b[1] == 'l' and c[1] == 'l' and c[2] == 'l') or (b[0] == 'l' and c[0] == 'l' and c[1] == 'l'))
        cout << "yes\n";
        else
        cout << "no\n"; 
    }
    return 0;
}