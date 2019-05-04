#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int a, b, n;
    cin >> n;
    set<pair<int, int> >s;
    vector<pair<int, int> >v;
    for(int i=0; i<n;i++)
    {
        cin >> a >> b;
        s.insert({a, b});
    }
    for(int i=0; i<n; i++)
    {
        cin >> a >> b;
        v.push_back({a,b});
    }
    sort(v.rbegin(), v.rend());
    // for(auto i : s)
    // {
    //     cout << i.first<< " " << i.second << endl;
    // }
    // cout << "-----\n";
    // for(auto i : v)
    // {
    //     cout << i.first<< " " << i.second << endl;
    // }
    cout << s.begin()->first + v.begin()->first << " " << s.begin()->second + v.begin()->second << endl;
    return 0;
}
