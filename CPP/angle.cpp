#include <bits/stdc++.h>
#define $ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main()
{
    $
    int t;
    cin >> t;
    while(t--)
    {
        int a;
        cin >> a;
        if(360%(180-a)==0)
        cout << "YES\n";
        else
        cout << "NO\n";
    }
}