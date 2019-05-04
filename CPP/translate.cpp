#include <bits/stdc++.h>
#define $ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
    $
    string s1, s2;
    cin >> s1 >> s2;
    reverse(s1.begin(), s1.end());
    if(s1.compare(s2)==0)
    cout<<"YES\n";
    else cout<<"NO\n";
}