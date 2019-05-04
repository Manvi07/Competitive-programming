#include <bits/stdc++.h>
#define $ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define go(i,a,b) for(int i=a;i<b;i++)
#define ll long long
using namespace std;

int main()
{
    $
    int n;
    cin >> n;
    ll sum = 0;
    int cp[n], pole[n], d[n];
    // ll max = 0;
    ll Min = 1000000;
    int index = 0;
    go(i,0,n)
    {
        cin >> cp[i] >> pole[i] >> d[i];
        sum += cp[i];
        if(cp[i]+pole[i] < Min)
        {
            Min = cp[i]+pole[i];
            index = i;
        }
    }
    sum += pole[index] + d[index];
    cout << sum << endl;
    return 0;
}