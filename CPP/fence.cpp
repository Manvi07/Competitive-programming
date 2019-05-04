#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n, m;
        int k;
        cin >> n >> m >> k;
        vector<pair<long long , long long > >p(k);
        vector<pair<long long , long long > >p2(k);
        for(int i=0;i<k;i++)
        {
            cin >> p[i].first >> p[i].second;
            p2[i].first = p[i].second;
            p2[i].second = p[i].first;
        }
        int ans = k*4;
        int j;
        sort(p.begin(), p.end());
        sort(p2.begin(), p2.end());
      
        for(int i=0; i<k; )
        {
            j = i+1;
            if(p[i].first != p[j].first)
            {
                i++;
                continue;
            }
            
            while(p[i].first == p[j].first)
            {
                if(abs(p[j].second - p[i].second) == 1)
                {
                    ans = ans - 2;
                }
                i++;
                j++;
            }

        }
        // for(auto i : p2)
        // {
        //     cout << i.first << " " << i.second << endl;
        // }
        for(int i=0; i<k; )
        {
            j = i+1;
            if(p2[i].first != p2[j].first)
            {
                i++;
                continue;
            }
            while(p2[i].first == p2[j].first)
            {
                if(abs(p2[j].second - p2[i].second) == 1)
                {
                    ans = ans - 2;
                }
                i++;
                j++;
            }

        }
        cout << ans << endl;
    }
    
    return 0;
}