#include <bits/stdc++.h>
#define $ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main()
{
    $
    int n;
    cin >> n;
    long long a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        if(a[i]%2==0)
        a[i] = a[i]-1;
    }
    for(int i=0;i<n;i++)
    cout << a[i] << " ";
    cout << endl;
    return 0;
}