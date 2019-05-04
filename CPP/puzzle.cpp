#include <bits/stdc++.h>
#define $ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main()
{
    $
    int n;
    int m;
    cin >> n >> m;
    int a[m];
    for(int i=0; i<m; i++)
    cin >> a[i];
    sort(a,a+m);
    int min = 1000000;
    for(int i=0;i<m+1-n;i++)
    {
        if((a[n+i-1]-a[i])<min)
        min = a[n+i-1]-a[i];
    }
    cout << min << endl;
    return 0;
}