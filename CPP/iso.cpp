#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        string s;
        cin >> s;
        while (q--)
        {
            int c;
            cin >> c;
            int ans = 0;
            vector<int> alpha (26,0);
            for(int i=0; i<s.size(); i++)
            {
                alpha[int(s[i] - 'a')]++;
            }
            sort(alpha.begin(), alpha.end(), greater<int>());
            for(int i=0; alpha[i] > c; i++)
            {
                ans += alpha[i] - c;
            }
             
            cout << ans << endl;           
        }
    }
    return 0;    
}