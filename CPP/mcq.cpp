#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int ans = 0;
        bool flag = false;
        string s1, s2;
        cin >> s1 >> s2;
        for(int i=0; i <n; i++)
        {
            if(s1[i] == s2[i] and flag == false)
            {
                ans ++;
            }
            else if(s2[i] == 'N')
            continue;
            else if(s1[i] != s2[i] and flag == false)
            {
                flag = true;
            }
            else
            {
                flag = false;
            }   
        }
        cout << ans << endl;
    }
    return 0;
}