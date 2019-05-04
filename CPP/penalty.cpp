#include <bits/stdc++.h>
#define $ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;

int main()
{
    $
    int n;
    cin >> n;
    ll a[n];
    ll sum=0;
    
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    sort(a,a+n);
    sum = a[0];
    for(int i=1;i<n;i++)
    {
        a[i] = a[i]+a[i-1];
        sum +=a[i];
    }
    cout << sum << endl;

    return 0;
}