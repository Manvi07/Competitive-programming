#include <bits/stdc++.h>
#define $ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main()
{
    $
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        bool check = true;
        for(int i=0; i<n/2; i++)
        {
            if(s[i]==s[n-i-1] or abs(s[i]-s[n-1-i])==2)
            {check = true;}
            else
            {
                check=false;
                break;
            }
        }
        if(check)
        cout << "YES\n";
        else
        cout << "NO\n";
    }
    return 0;
}