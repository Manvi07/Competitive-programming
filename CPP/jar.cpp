#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    uint64_t ans=0;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        ans=0;
        for(int i=0; i<n ;i++)
        {
            cin >> a[i];
            ans += a[i]-1;
        }
        cout << ans+1 << endl;
    }
    return 0;
}