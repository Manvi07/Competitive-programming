#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        vector<int>v(n);
        string ans = "YES";
        for(int i=0; i<n; i++)
        cin >> v[i];
        for(int i=0; i<n-1; i++)
        {
            int diff = abs(v[i] - v[i+1]);
            if(v[i+1] <= v[i])
            {
                m = m+diff;
                m += min(k, v[i] - diff);
            }
            else
            {
                if(diff<=k)
                {
                    m += min(k-diff, v[i]);
                    continue;
                }
                else
                {
                    if(m<diff-k)
                    {
                        ans = "NO";
                        break;
                    }
                    else
                    {
                        m = m-(diff-k);
                    }                    
                }                
            }            
        }
        cout << ans << endl;
    }
    return 0;
}