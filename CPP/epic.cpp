#include<bits/stdc++.h>
#define Simon true
#define Anti false
using namespace std;

int main()
{
    int a, b, n;
    cin >> a >> b >> n;
    bool win = Anti;
    while(1)
    {
        if(n >= __gcd(a,n) and win == Anti)
        {
            n = n - __gcd(a, n);
            win = Simon;
        } 
        else if(n >= __gcd(b, n) and win == Simon)
        {
            n = n- __gcd(b,n);
            win = Anti;
        }
        else
        break;
    }
    if(win == Simon)
    cout << 0 << endl;
    else
    cout << 1 << endl;
}