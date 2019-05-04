#include <bits/stdc++.h>
using namespace std;


int D, Q;
vector<pair<int, int> >v;
int main()
{
    int t;
    cin >> t;
    int a, b;
    while(t--)
    {
        cin >> D;
        int temp =0;
        for(int i=0; i<D; i++)
        {
            cin >> a >> b;
            v.push_back({a, b});
        }
        sort(v.begin(), v.end());
        for(int i=1; i<v.size(); i++)
        {
            v[i].second += v[i-1].second;
        }
        // for(auto i : v)
        // {
        //     cout << i.first  << " " << i.second << endl;
        // }
        cin >> Q;
        for(int i=0; i<Q; i++)
        {
            cin >> a >> b;
            bool flag = false;
            for(auto i : v)
            {
                if(i.first <= a and i.second >= b)
                {
                    flag = true;
                    break;
                }
            }
            if(flag)
            cout << "Go Camp\n";
            else
            cout << "Go Sleep\n";
        }
    v.clear();
    }
    return 0; 
}