#include <bits/stdc++.h>
using namespace std;


long long ans;
int n, k;
int main()
{
    int q;
    cin >> q;
    while(q--)
    {
        cin >> n >> k;
        vector<long long> v(n);
        for(int i=0; i<n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        if(v[0]+k >= v[n-1] - k)
        ans = v[0] + k;
        else
        {
            ans = -1;
        }
        cout << ans << endl;
    }
    return 0;
}