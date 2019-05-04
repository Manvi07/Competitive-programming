#include <bits/stdc++.h>
#define $ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main()
{
    $
    int t;
    int p,q;
    int c=0;
    cin >> t;
    while(t--)
    {
        cin >> p >> q;
        if(q-p>=2)
        c++;
    }
    cout << c<< endl;
}