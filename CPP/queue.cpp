#include <bits/stdc++.h>
#define $ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
    $
    int n, t;
    cin >> n >> t;
    string s;
    cin >> s;
    int T=0;
    while(t>T)
    {
        for(int i=1;i<n;i++)
        if(s[i]=='G' and s[i-1]=='B')
        {swap(s[i], s[i-1]);i++;}
        T++;
    }
    cout << s <<endl;
    return 0;
}