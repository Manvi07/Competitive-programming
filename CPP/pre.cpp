#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    int n, k;
    cin >> t;
    while(t--)
   {
       cin >> n >> k;
        vector<long long>v(n);
        for(int i=0;i<n;i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        // for(auto i : v)
        // cout << i << " ";
        // cout << endl;
        // cout << v[n-k] << endl;
        auto it =lower_bound(v.begin(), v.end(), v[n-k]);
        
        cout << v.end() - it << endl;
   }
}