#include <bits/stdc++.h>
#define $ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main()
{
    $
    string s;
    cin >> s;
    long long c = 0;
    for(auto i : s)   
    if(i=='4' or i=='7')
    c++;
    if(c==4 or c==7)
    cout<<"YES\n";
    else
    cout<<"NO\n";
    return 0;
}