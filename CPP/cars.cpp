#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a;
    int ans = 0;
    for(int i=0; i<n; i++)
    {
        cin >> a;
        if(a!=1)
        ans++;
    }
    cout << ans << endl;
}