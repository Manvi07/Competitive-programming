#include <bits/stdc++.h>
#define $ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;


int main()
{
    $
    long long n, q;
    cin >> n >> q;
    long long k=1, j;
    long long v[n+1][n+1];
    for(auto i=0; i<n; i++)
    {
        // v[i] = vector<long long>(n);
        if(i%2==0)
        j=0;
        else j=1;
        for(;j<n;j=j+2)
        {
            v[i][j]=k;
            k++;
        }
    }
    for(auto i=0; i<n; i++)
    {
        if(i%2==0)
        j=1;
        else j=0;
        for(;j<n;j=j+2)
        {
            v[i][j]=k;
            k++;
        }
    }
    long long x, y;
    while(q--)
    {
        cin >> x >> y;
        cout<<v[x-1][y-1] <<endl;
    }
    return 0;
}