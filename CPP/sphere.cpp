#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    set<unsigned long long> ans;
    cin >> n;
    ans.insert(1);
    ans.insert((n*(n+1))/2);
    if(n % 2 == 0)
    {
        ans.insert(n/2 + 2);
        ans.insert((n*n)/4);
        int i = 2;
        while(n%(2*i) == 0)
        {
            int y = i*2;
            cout << y << endl;
            unsigned long long h = (n*(2+((n/y)-1)*y))/(y*2);
            ans.insert(h);
            i++;
            cout << 2*i << endl;
        }
    }
    for(auto j : ans)
        cout << j << " ";
        cout << endl;
    return 0;
}