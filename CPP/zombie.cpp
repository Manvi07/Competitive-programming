#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int>c(n), v(n);
        for(int i=0; i<n; i ++)
        {
            cin >> c[i];
        }
        for(int i=0; i<n; i ++)
        {
            cin >> v[i];
        }
        string a = "YES";
        vector<int>ans(n+1,0);
        for(int i=0; i<n; i++)
        {
            ans[max(0, i-c[i])] += 1;
            ans[min(n, i+c[i]+1)] += -1;
        }
        // cout << ans[0] << endl;
        for(int i=1; i<n;i++)
        {
            ans[i] = ans[i]+ans[i-1];
            // cout << ans[i] << endl   ;
        }
        ans.resize(n);
        sort(ans.begin(), ans.end());
        sort(v.begin(), v.end());
        
        for(int i=0; i<n; i++)
        {
            if(ans[i] != v[i])
            {
                a = "NO";
                break;
            }
        }
        cout << a << endl;
    }
    return 0;
}