#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        string s;
        cin >> s;
        int c0 = 0, c1=0;
        bool flag = false;
        char c = '3';
        string ans = "WIN";
        for(int i=0; i<s.size(); i++)
        {
            if(s[i] == '0')
            c0++;
            else
            c1++;
        }
        if(c1%2 == 0)
        ans = "LOSE";
        cout << ans << endl;
    }
    return 0;
}