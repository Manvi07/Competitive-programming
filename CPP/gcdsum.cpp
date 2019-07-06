#include<bits/stdc++.h>
using namespace std;

int gcd(vector<int> vec)
{
    int gcd = vec[0];
    for (int i = 1; i < vec.size(); i++)
    {
        gcd = __gcd(gcd, vec[i]);
    }
    return gcd;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int>v(n), p(n);
        set<int>s;

        for(int i=0; i<n; i++)
        {
            cin >> v[i];
            p[i] = v[i];
            s.insert(v[i]);
        }
        auto it = --s.end();
        it--;
        int p = *(s.rbegin());
        remove(v.begin(), v.end(), *(s.rbegin()));
        int q = gcd(v);
        int m = *it;
        remove(p.begin(), p.end(), *it);
        int n = gcd(p);
        cout << p+q << endl;
    }
    return 0;
}