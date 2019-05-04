#include <bits/stdc++.h>
#define $ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define Max 1000000009
using namespace std;

int main()
{
    $
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++)
    {
        cin >> v[i];
    }

    long long temp = 0;
    long long ans = 0;
    for(int i=0; i<n; i++)
    {
        temp = (temp + (i+1)*v[i])%Max;
        ans += ((temp%Max)*(v[i]%Max))%Max ;        
    }
    cout << ans << endl;
    return 0;
}