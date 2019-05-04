#include <bits/stdc++.h>
#define Max 1000000007
using namespace std;

int main()
{
    int t;
    long long n;
    int k;
    cin >> t;
    long long *a;
    while(t--)
    {
        long long ans=0, q=1;
        long long temp=0, product=1, r=0;
        cin >> n >> k;
        a = new long long[k+1];

        for(int i = 1; i<=k;i++)
        a[i] = k-i+1;

        if(n<(k*(k+1))/2)
            ans = -1;
        else
        {
            temp = (k*(k+1))/2;
            q = (n-temp)/k;
            r = (n-temp)%k;
            for(int i=1;i<=k;i++)
            {
                if(i<=r)
                a[i] = a[i] + q + 1;
                else
                a[i] = a[i] + q;
                product = ((product%Max)*((a[i]%Max)*(a[i]-1)%Max)%Max)%Max;
                // cout << product << endl;
            }
            ans = product%Max;
            // for(int i=1; i<=k; i++)
            // {
            //     cout << a[i] << " " ;
            // }
            // cout << endl;
        }
        cout << ans << endl;
        delete a;
    }
    return 0;
}