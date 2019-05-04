#include <bits/stdc++.h>
#define $ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main()
{
    $
    int n;
    int p, q, r;
    cin >> n;
    int a=0, b=0, c=0;
    while(n--)
    {
        cin >> p >> q >> r;
        a+=p;
        b+=q;
        c+=r;
    }
    if(a==0 and b==0 and c==0)
    cout<<"YES\n";
    else
    cout <<"NO\n";
    return 0;
}