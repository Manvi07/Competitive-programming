#include <bits/stdc++.h>
using namespace std;

deque <int>d;
vector<pair<int, int> > v(1000000);
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int q;
    cin >> q;
    
    while(q--){
        char c;
        int a;
        cin >> c >> a;
        if(c == 'L')
        {
            d.push_front(a);
            for(int i = 1; i < d.size(); i++)
                v[d[i]].first++;
            v[a].second += d.size()-1;
        }
        else if(c == 'R')
        {
            d.push_back(a);
            for(int i = 0; i < d.size()-1; i++)
                v[d[i]].second++;
            v[a].first += d.size() - 1;
        }
        else
        {
            cout << min(v[a].first, v[a].second) << endl;
        }
        // for(auto i : d)
        // cout << i << " ";
        // cout << endl;
        // for(int i = 0; i < d.size(); i++)
        // cout << v[d[i]].first << " " << v[d[i]].second << endl;
    }
    return 0;    
}