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
        int v;
        int ans = n;
        for(int i=0;i<n;i++)
            {
                cin >> v;
                if(v==0)
                ans--;
            }
        cout << ans << endl;

    }
}