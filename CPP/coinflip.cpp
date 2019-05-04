#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while(t--)
    {
        int G;
        cin >> G;
        while(G--)
        {
            int i, n, q;
            cin >> i >> n >> q;
            if(n%2 == 0)
            {
                cout << n/2;
            }
            else
            {
                if(i == q)
                cout << n/2;
                else
                cout << n - n/2;
            }
            cout << endl;
        }
    }
    return 0;
}
