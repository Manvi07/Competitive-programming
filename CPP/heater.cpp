#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int n, r;
    cin >> n >> r;
    vector<int> v(n);
    vector<pair<int, int> >p;

    for(int i=0; i<n; i++)
    {
        cin >> v[i];
        if(v[i])
        p.push_back(make_pair(i+1-r+1, i+1+r-1));
    }
    int ans = 1;
    if(p.empty() || p[0].first>1)
    {
        cout << -1 << endl;
        return 0;
    }
    if(r == 1)
    {
        cout << n << endl;
        return 0;
    }
    int k;
// for(auto i = 0; i < p.size(); i++)
//     cout << p[i].first << p[i].second << endl;
    for(auto i = 0; i < p.size(); i++)
    {
        k = i;
        // cout << p[i].first << p[i].second << endl;
        while(k < p.size() and p[k].first<= p[i].second +1)
        {
            k++;
        }
        ans++;
        i = k-1;
    }
    if(p[p.size()-1].second<n)
    ans = -1;
    cout << ans << endl;
    return 0;
}