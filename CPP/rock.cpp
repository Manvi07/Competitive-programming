#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int k = 1; k<=t; k++)
    {
        int n;
        cin >> n;
        bool R=false;
        bool P=false;
        bool S=false;
        vector<string>s(n);
        for(int i=0; i<n; i++)
        cin >> s[i];
        string ans = "";
        bool flag = false;
        for(int i=0; ; i++)
        {
            for(int j=0;j<n;j++)
            {
                if(s[j].size()>i)
                {
                    flag = true;
                    if(s[j][i] == 'R')
                    R = true;
                    else if(s[j][i] == 'S')
                    S = true;
                    else
                    P = true;
                }
            }
            if(R and S and P)
            {
                ans = "IMPOSSIBLE";
                break;
            }
            else if(R and !S and !P)
            {
                ans += 'P';
                // break;
            }
            else if(S and !P and !R)
            {
                ans += 'R';
                // break;
            }
            else if(P and !R and !S)
            {
                ans += 'S';
                // break;
            }
            
            else if (R and P and !S)
            {
                ans += "PSS";
            }
            else if(P and S and !R)
            ans += "SRR";
            else if(S and R and !P)
            {
                ans += "RPP";
            }
            if(flag == false)
            break;
            R = false;
            S = false;
            P = false;
            flag = false;
        }
        cout << "Case #" << k <<": "; 
        cout << ans << endl;
    }
    return 0;
}