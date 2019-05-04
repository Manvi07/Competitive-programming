#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i=0; i<n ;i++)
        cin >> v[i];
        sort(v.begin(), v.end());
        long long sum1=0, sum2=0;
        for(int i=0; i<n/2; i++)
        sum1 += v[i];
        for(int i=n/2; i<n; i++)
        sum2 += v[i];
        cout << sum2 - sum1 << endl;
    }
    return 0;
}