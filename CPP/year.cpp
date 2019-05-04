#include <bits/stdc++.h>
#define $ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

bool check(string s)
{
    if(s[0]==s[1] or s[0]==s[2] or s[0]==s[3])
    return true;
    else if(s[1]==s[2] or s[1]==s[3] or s[3]==s[2])
    return true;
    return false;
}

int main()
{
    int t ;
    cin >> t;
    t++;
    string s = to_string(t);
    while(check(s)==true)
    {
        t++;
        s = to_string(t);
    }
    cout << s <<endl;
}