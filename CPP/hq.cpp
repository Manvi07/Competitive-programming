#include <bits/stdc++.h>
#define $ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main()
{
    $
    string s;
    cin >> s;
    if(s.find('H')!=string::npos or s.find('Q')!=string::npos or s.find('9')!=string::npos)
    cout << "YES\n";
    else
    cout << "NO\n";
    return 0;
}