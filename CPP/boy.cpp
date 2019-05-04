#include <bits/stdc++.h>
#define $ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main()
{
    $
    string s;
    cin >> s;
    set<char>q;
    for(int i=0;i<s.size();i++)
    {
        q.insert(s[i]);
    }
    if(q.size()%2!=0)
    cout << "IGNORE HIM!\n";
    else
    cout << "CHAT WITH HER!\n";
    return 0;
}