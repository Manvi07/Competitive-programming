#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int a[k], sum = k;
    for(int i = 0; i<k; i++)
    {
        a[i] = 1;
        while(sum+a[i] <= n)
        {
            sum += a[i];
            a[i] = 2*a[i];
        }
    }
    if(sum == n)
    {
        cout << "YES\n";
        for(int i = k-1 ; i>=0; i--)
        cout << a[i] << " ";
        cout << endl;
    }
    else
    cout << "NO\n";
    return 0;
}