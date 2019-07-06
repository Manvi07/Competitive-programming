#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k, ans=0;
        cin >> n >> k;
        if(n>k)
        {
            ans = 2*min(k, n-k);
        }
        else if(n==k)
        ans = 0;
        else
        {
            int temp = k%n;
            ans = 2*min(temp, n-temp);
        }
        cout << ans << endl;
    }
    return 0;
}