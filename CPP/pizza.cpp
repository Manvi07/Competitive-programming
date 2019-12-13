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
        vector<string>s(n);
        map<int, vector<int> >m1, m2;
        for(int i=0; i<n; i++)
        cin >> s[i];
        int cnt1=0, cnt2=0;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n/2;j++)
            if(s[i][j] == '1')
            {
                m1[i].push_back(j);
                cnt1++;
            }
        }

        for(int i=0; i<n; i++)
        {
            for(int j=n/2; j<n;j++)
            if(s[i][j] == '1')
            {
                m2[i].push_back(j);
                cnt2++;
            }
        }
        for(int i=0; i<n;i++)
        {
            if(m1[i].size()>m2[i].size())
            {
                if(p1>p2 and p1+)
                s[i].reverse(s[i].begin(), s[i].end());

            }
        }

        cout << abs(cnt1-cnt2) << endl;
    }
    return 0;
}