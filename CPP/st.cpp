#include <bits/stdc++.h>
#define $ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main()
{
    $
    int n;
    string s, s1;
    string t, t1;
    cin >> n >> s >> t;
    s1 = s;
    t1 = t;
    sort(t1.begin(), t1.end());
    sort(s1.begin(), s1.end());
    vector<int> v;
    if(s1.compare(t1)!=0)
    {
        cout << -1 << endl;
        return 0;
    }
    else
    {
        int temp = n;
        for(int i = 0; i<n; i++)
        {
            if(s[i]!=t[i] and i!=temp)
            {
                swap(s[i], s[i+1]);
                cout << s << endl;
                temp  = i;
                v.push_back(i+1);
                i = 0;
            }
            else if(i==n-1 and s.compare(t)!=0)
            {
                cout << -1 << endl;
                return 0;
            }

        }
        cout << v.size() << endl;
        for(auto i : v)
        cout <<  i << " ";
        cout << endl;
    }
}