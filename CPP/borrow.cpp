#include <bits/stdc++.h>
#define $ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main()
{
    $
    long long k, n, w;
    cin >> k >> n >> w;
    long long req = k*((w*(w+1))/2);
    if(req>n)
    cout << req-n << endl;
    else
    cout << 0 << endl;
    return 0;
}