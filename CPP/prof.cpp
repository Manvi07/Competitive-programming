#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    string s1, s2;
    pair<string, string>p[m];
    for(int i=0;i<m;i++)
    {
        cin >> s1 >> s2;
        p[i] = make_pair(s1, s2);
    }
    string ans[n];
    string s[n];
    for(int i=0;i<n;i++)
    {
        cin >> s[i];
    }
    for(int j=0;j<n;j++)
    {
        for(int i=0;i<m;i++)
        {
            if(p[i].first==s[j] or p[i].second==s[j])
            {
                if(p[i].first.size()<p[i].second.size())
                ans[j] = p[i].first;
                else if(p[i].first.size()>p[i].second.size())
                ans[j] = p[i].second;
                else
                ans[j] = s[j];
            }
        }
    }
    for(int i=0;i<n;i++)
    cout << ans[i] <<" ";
    cout << endl;
}