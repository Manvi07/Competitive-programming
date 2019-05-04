#include <bits/stdc++.h>
#define $ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main()
{
    $
    string s;
    multiset<char> m;
    cin >> s;
    for(auto i : s)
    {
        if(i!='+')
        {
            m.insert(i);
        }
    }
    string ans = "";
    for(auto i : m)
    {
        ans+=i;
        ans+='+';
    }
    ans.pop_back();
    cout << ans << endl;
    return 0;
}