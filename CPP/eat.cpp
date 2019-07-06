#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, m;
        int a, b;
        cin >> n >> m;
        vector<pair<int, int> >v;
        for(int i=0; i<n; i++)
        {
            cin >> a >> b;
            v.push_back({b, a});
        }
        int ans = 0;
        sort(v.rbegin(), v.rend());
        ans += v[0].first;
        for(int i=1; i<v.size(); i++)
        {
            if(v[0].second != v[i].second)
            {
                ans += v[i].first;
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}