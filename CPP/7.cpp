#include <bits/stdc++.h>
#define $ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main()
{
    $
    string s;
    cin >> s;
    if(s.find("0000000") != string::npos or s.find("1111111") != string::npos)
    cout << "YES\n";
    else
    cout << "NO\n";
    return  0;
}