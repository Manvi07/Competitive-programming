#include <bits/stdc++.h>
#define $ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main()
{
    $
    int t;
    cin >> t;
    while(t--)
    {
        int n, m;
        cin >> n >> m;
        long long k;
        vector<long long> a, b;
        for(int i=0; i<n; i++)
        {
            cin >> k;
            if(k)
            a.push_back(k);
        }
        for(int i=0; i<m; i++)
        {
            cin >> k;
            if(k)
            b.push_back(k);
        }
        n = a.size();
        m = b.size();
        if(n == m)
        {
            int c=0;
            sort(a.begin(), a.end());
            sort(b.begin(), b.end());
            for(int i=0; i<n; i++)
            if(a[i] == b[i])
            c++;
            if(c == n)
            cout << "Bob\n";
            else
            cout << "Alice\n";
        }
        
        else
        {
            cout << "Alice\n";
        }
        
    }
    return 0;
}