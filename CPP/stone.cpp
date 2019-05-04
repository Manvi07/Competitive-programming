#include <bits/stdc++.h>
#define $ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main()
{
    $
    int n;
    string s;
    cin >> n >> s;
    int c = 0;
    for(int i=1 ;i<n; i++)
    {
        if(s[i]==s[i-1])
        c++;
    }
    cout << c << endl;
    return 0;
}