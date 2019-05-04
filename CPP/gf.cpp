#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        uint64_t n;
        cin >> n;
        string s;
        cin >> s;
        char c;
        cin >> c;
        uint64_t ans = n*(n+1)/2;
        vector<int>v;
        for(int i=0; i<n; i++)
        {
            if(s[i] == c)
            {
                v.push_back(i);
            }
        }
        if(v.size())
        {
            uint64_t h = (v[0]*(v[0]+1))/2;
            uint64_t p = (n - *v.rbegin()-1)*(n - *v.rbegin())/2;
            ans = ans - h;
            ans = ans - p;
        }
        else ans = 0;
        uint64_t h = 0;
        for(int i=1; i<v.size(); i++)
        {
            h = ((v[i]-v[i-1]-1)*(v[i]-v[i-1]))/2;
            ans = ans - h;
        }
        cout << ans << endl;
    }
    return 0;
}   