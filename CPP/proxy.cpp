#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int l = n;
        n = ceil(0.75*n);
        string s;
        cin >> s;
        int count = 0;
        for(int i=0; i<l; i++)
        {
            if(s[i] == 'P')
            count++;
        }
        int ans = 0;
        for (int i=2; i<l-2; i++)
        {
            if(count+ans >= n)
                break;
            if(s[i] == 'A' and (s[i-1] == 'P' or s[i-2] == 'P') and (s[i+1] == 'P' or s[i+2] == 'P'))
                ans++;
        }
        if(count+ans<n)
        {
            ans = -1;
        }
        cout << ans << endl;     
    }
    
    return 0;
}