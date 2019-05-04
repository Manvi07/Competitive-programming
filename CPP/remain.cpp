#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    set <int>s;
    int a;
    for(int i=0; i<n ;i++)
    {
        cin >> a;
        s.insert(a);
    }
    int ans=0;
    vector<int> v;
    for (auto i : s)
    {
        v.push_back(i);
    }
    int g = v[v.size()-1];
    for(int i=v.size()-2; i>=0 ; i--)
    {
        if(v[i]%g != 0)
        {
            ans = v[i];
            break;
        }
    }
    cout << ans << endl;
    return 0;
}