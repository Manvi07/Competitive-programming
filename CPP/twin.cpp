#include <bits/stdc++.h>
#define $ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main()
{
    $
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    sort(a, a+n, greater<int>());
    for(int i=1; i<n; i++)
    {
        a[i] = a[i] + a[i-1];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]>a[n-1]-a[i])
        {
            cout << i+1 << endl;
            break;
        }
    }
}