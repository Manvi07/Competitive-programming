#include <bits/stdc++.h>
#define $ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main()
{
    $
    int n, m;
    cin >> n >> m;
    int a[n], b[n], dif[n];
    long long sum = 0, difSum = 0;
    for(int i=0;i<n;i++)
    {
        cin >> a[i] >> b[i];
        sum += a[i];
        dif[i] = a[i] - b[i];
        difSum += dif[i];
    }
    sort(dif, dif + n);
    if(sum-difSum>m)
    {
        cout << -1 << endl;
        return 0;
    }
    int i = 1;
    while(sum > m)
    {
        // cout << i << endl;
        sum = sum - dif[n-i];
        i++;
    }
    cout << i-1 << endl;
}