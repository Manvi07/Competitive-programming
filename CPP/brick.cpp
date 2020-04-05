#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int s, c=0;
        vector<int>w(3);
        cin >> s >> w[0] >> w[1] >> w[2];
        while(!w.empty())
        {
            int t=s;
            while(t>=*w.rbegin() and !w.empty())
            {
                t = t-*w.rbegin();
                w.pop_back();
            }
            // cout << w.size() << endl;
            c++;
        }
        cout << c << endl;
    }
    return 0;
}