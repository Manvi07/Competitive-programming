#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t ;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> d(n);
        vector<int> q(n);
        for(int i=0; i<n ;i++)
        cin >> a[i];
        for(int i=0; i<n ;i++)
        cin >> d[i];
        q[0] = a[n-1]+a[1];
        q[n-1] = a[0] + a[n-2];
        for(int i=1; i<n-1; i++)
        q[i] = a[i-1] + a[i+1];
        int ans = -1;
        for(int i=0; i<n ;i++)
        {
            if(q[i]<d[i] and ans < d[i])
            ans = d[i];
        }        
        cout << ans << endl;
    }
    return 0;
}