#include <bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long n, m, q;
    cin >> n >> m >> q;
    while(q--)
    {
        unsigned long long sx, sy, ex, ey;
        cin >> sx >> sy >> ex >> ey;
        if(n == m)
        {
            if(sy == ey)
            cout << "YES\n";
            else
            {
                cout << "NO\n";
            }            
        }
        else if(n%2!=0 or m%2!=0)
        {
            cout << "YES\n";
        }
        else
        {
            if(ex == 1)
            {
                if(ey <= n/2 and sy <= m/2 or (ey > n/2 and sy > m/2))
                cout << "YES\n";
                else
                {
                    cout << "NO\n"; 
                }
                
            } 
            else
            {
                if(ey<=m/2 and sy <= n/2 or (ey>m/2 and sy > n/2))
                cout << "YES\n";
                else
                {
                    cout << "NO\n";
                }
                
            }
            
        }
    }
    return 0;
}