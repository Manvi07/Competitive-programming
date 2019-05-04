#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    string s1, s2;
    cin >> s1 >> s2;
    int ans = 0;
    for(int i=0;i<s1.size(); i++)
    {
        int c=0, k=i;
        for(int j=0;j<s2.size();)
        {
            if(s2[j] == s1[k])
            c++;
            k++;j++;
            if(k == s1.size() and j<s2.size())
            {
                c++;
                break;
            }
        }
        if(c == 0)
        ans++;
    }
    cout << ans << endl;
    return 0;
}