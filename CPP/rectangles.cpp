#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> v(4*n);
        map<int, int>m;

        for(int i=0; i<4*n; i++)
        {
            cin >> v[i];
            m[v[i]]++;
        }
        
        string ans = "YES";

        for(int i=0; i<m.size(); i++)
        if(m[i]%2!=0)
        ans = "NO";

        sort(v.begin(), v.end());
        int area = v[0]*v[4*n-1];
        // cout << area << endl;
        for(int i=0; i<4*n; i+=2)
        {
            // cout << v[i] << " " << v[4*n-i-1] << endl;
            // cout << v[i]*v[4*n-1-i] << endl;
            if(area != v[i]*v[4*n-1-i])
            {
                ans = "NO";
                break;
            }
        }
        // ans = "YES";
        cout << ans << endl;
    }
    return 0;
}