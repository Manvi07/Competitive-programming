#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, m; 
        cin >> n >> m;
        long long ans = 0;
        while(n>m)
        {
            n = n/m;
            ans++;
        }
        ans++;
        cout<< ans << endl;
    }
    return 0;
}
