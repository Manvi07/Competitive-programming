#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k1, k2;
        cin >> n >> k1 >> k2;
        int winner = -1, a=0;
        for(int i=0; i<k1; i++)
        {
            cin >> a;
            if( a==n)
            winner = 1;
        }
        for(int i=0; i<k2; i++)
        {
            cin >> a;
        }
        if(winner == -1)
        cout << "NO\n";
        else
        {
            cout << "YES\n";
        }
    }
    return 0;
}