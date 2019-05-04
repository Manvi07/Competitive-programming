#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n], b[n];
    for(int i=0; i<n; i++)
    cin >> a[i];
    for(int i=0; i<n; i++)
    cin >> b[i];
    int q;
    cin >>q;
    while(q--)
    {
        int l, r;
        cin >> l >> r;
        multiset<int>c,d;
        set<int>s;
        for(int i=l-1;i<r;i++)
        {
            c.insert(a[i]);
            d.insert(b[i]);
            s.insert(a[i]);
        }
        long long ans=0;
        for(auto i=s.begin();i!=s.end();i++)
        {
            if(c.count(*i)==d.count(*i) and c.count(*i)%2!=0)
            ans++;
        }
        c.clear();
        d.clear();
        s.clear();
        cout << ans << endl;
    }
    return 0;
}