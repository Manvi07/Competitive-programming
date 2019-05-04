#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;
    int a[n];
    int sum=1;
    for(int i=0;i<n-1;i++)
    {
        cin >> a[i];
    }
    for(int i=0;i<n-1;i=i+a[i])
    if(a[i]+1+i==t)
    {
        cout << "YES\n";
        return 0;
    }
    cout << "NO\n";
    return 0;
}