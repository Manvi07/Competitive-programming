#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n , m;
        cin >> n >> m;
        int v[n];
        for(int i=0; i<n; i++)
        cin >> v[i];
        int sum = 0;
        sort(v, v+n);
        for(int i=n-1; i>=0 ;i--)
        {
            if(v[i] + sum <= m)
            sum += v[i];
        }
        if(sum == m)
        cout << "Yes\n";
        else
        cout <<  "No\n";
    }
    return 0;
}