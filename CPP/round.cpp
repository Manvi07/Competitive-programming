#include <bits/stdc++.h>
#define $ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;


int main(){
    $
    int n, k;
    cin >> n >> k;
    int a[n];
    int ak;
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        if(i == k-1)
        ak = a[i];
    }
    sort(a,a+n);
    if(ak)
    {
        auto i = lower_bound(a,a+n,ak);    
        cout << n - (i - a) << endl;
    }
    else
    {
        auto i = lower_bound(a,a+n,ak+1);  
        cout << n - (i - a) << endl;
    }
    return 0;
}