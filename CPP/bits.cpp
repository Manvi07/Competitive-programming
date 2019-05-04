#include <bits/stdc++.h>
#define $ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

string s;

int main()
{
    $
    int t;
    cin >> t;
    int x = 0;
    while(t--)
    {
        cin >> s;
        if(s.find("++") != string::npos)
        x++;
        else
        x--;
    }
    cout << x << endl;
}