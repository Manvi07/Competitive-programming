#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int sp, ep , n;
        cin >> sp >> ep >> n;
        int temp, a[n];
        set<int>s;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            temp = s.size();
            cin >> a[i];
            s.insert(a[i]);
            if(s.size() == temp)
            {
                v.push_back(i);
            }
        }
        vector<int> path(n-1);
        int sum=0;
        for(int i=0; i<n-1; i++)
        {
            cin >> path[i];
            sum += path[i];
        }
        for(int i=0; i<v.size(); i++)
        {
            sum = sum - path[v[i]-1];
        }
        cout << sum << endl;
    }
    return 0;
}