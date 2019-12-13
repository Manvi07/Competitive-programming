#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int>v(n);
    map<int, int>m;
    for(int i=0; i<n;i++)
    {
        cin >> v[i];
        m[v[i]]++;
    }
    int ans = 0;
    // cout << ans << endl;
    for(int i=0; i<m.size(); i++)
    {
        if(m[i] == 1)
        continue;
        else if(m[i] == 2)
        {
            if(m[i+1] == 0)
            {
                m[i+1]++;
                m[i]--;
            }
            else if(i-1>0 and m[i-1] == 0)
            {
                m[i-1]++;
                m[i]--;
            }
            
        }
        else if(m[i] > 2)
        {
            if(m[i+1] == 0)
            {
                m[i+1]++;
                m[i]--;
            }
            if(i-1>0 and m[i-1] == 0)
            {
                m[i-1]++;
                m[i]--;
            }
        }
       
    // cout << m.size() << << endl;
    }
     for(int i=1; i<=150001; i++)
        if(m[i] > 0)
        {ans++; }
    cout << ans << endl;
    return 0;
}