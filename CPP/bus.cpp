#include <bits/stdc++.h>
#define $ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s[n];
    bool check = false;
    for(int i=0;i<n;i++)
    {
        cin >> s[i];
        if(!check and (s[i].find("OO|")!=string::npos or s[i].find("|OO")!=string::npos))
        {
            check = true;
            size_t f = s[i].find("OO");
            s[i].replace(f, string("OO").length(), "++");
        }
    }
    if(!check)
    cout << "NO\n";
    else
    {
        cout << "YES\n";
        for(int i=0; i<n; i++)
        cout << s[i] <<endl;
    }

}