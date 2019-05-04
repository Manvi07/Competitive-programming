#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, a;
        cin >> n;
        vector<int> v[n+1];
        for(int i=0; i<n; i++)
        {
            cin >> a;
            v[a].push_back(i+1);
        }
        int ans = 0;
        for(int i=1; i<=n; i++)
        {
            // for(auto j : v[i])
            // {
            //     cout << j << " ";
            // }
            // cout << "yo" << endl;
            if(v[i].size()>1)
            {
                int c=0;
                for(auto j : v[i])
                {
                    if(!v[j].empty())
                    c++;
                }
                if(c>1)
                {
                    ans++;
                    break;
                }
            }
        }
        if(ans)
        cout << "Truly Happy\n";
        else
        cout << "Poor Chef\n";
    }
    return 0;
}
