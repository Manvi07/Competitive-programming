#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a;
        multiset<int>s;
        map<int, int> m;
        for(int i=0; i<n; i++)
        {
            cin >> a;
            s.insert(a);
        }
        for(auto i : s)
        {
            m[i]++;
        }
        multiset<int>ans;
        for(auto i=m.begin();i!=m.end();i++)
        {
            ans.insert(i->second);
        }
        auto it = m.begin();
        auto i = m.begin();
        i++;
        for(;i!=m.end();i++)
        {
            if((i->first)-(it->first)==1)
            {
                ans.insert((i->second)+(it->second));
            }
            it = i;
        }
        cout << *(ans.rbegin()) << endl;
    }
    return 0;
}