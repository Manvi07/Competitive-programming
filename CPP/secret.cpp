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
        string s[n];
        int count[n][26];
        for(int i=0 ;i<n; i++)
        {
            for(int j=0; j<26; j++)
            {
                count[i][j]=0;
            }
        }
        for(int i=0; i<n;i++)
        {
            cin >> s[i];
            for(int j=0; j<s[i].size(); j++)
            {
                count[i][s[i][j]-'a']=1;
            }
            // for(int j=0; j<26; j++)
            // cout << count[i][j]<< " ";
            // cout << endl;
        }
        int ans=0;
        for(int i=0; i<26; i++)
        {
            int p=0;
            for(int j=0; j<n; j++)
            {
                if(count[j][i] == 1)
                p++;
            }
            if(p == n)
            ans ++ ;
        }
        cout << ans << endl;
    }
    return 0;
}