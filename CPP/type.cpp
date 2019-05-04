#include <bits/stdc++.h>
using namespace std;

int calculate(string s)
{
    int ans = 0;
    if(s.size())
    ans = 2;
    for(int i = 1; i<s.size(); i++)
    {
        if(s[i] == 'f' or s[i] == 'd')
        {
            if(s[i-1] == 'f' or s[i-1] == 'd')
            ans += 4;
            else 
            ans += 2;
        }
        else
        {
            if(s[i-1] == 'k' or s[i-1] == 'j')
            ans += 4;
            else 
            ans += 2;
        }
    }
    return ans;
}

int main()
{
    int t;
    cin >> t;
    
    while(t--)
    {
        int n;
        cin >> n;
        string str;
        set<string>s;
        vector<string>v;
        long long int cost = 0;
        int temp = 0;
        for(int i=0; i<n; i++)
        {
            temp = s.size();
            cin >> str;
            s.insert(str);
            if(temp == s.size())
            {
                cost += calculate(str)/2;
            }
            else
            cost += calculate(str);
        }
        cout << cost << endl;
    }
}