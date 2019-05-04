#include <bits/stdc++.h>
#define $ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main()
{
    $
    string s;
    cin >> s;
    int c=0;
    for(auto i=1;i<s.size();i++)
    {
        if(isupper(s[i]))
        c++;
    }    
    if(c==s.size()-1)
    {
        if(isupper(s[0]))
        s[0]=tolower(s[0]);
        else
        s[0]=toupper(s[0]);
        for(int i=1;i<s.size();i++)
        s[i]=tolower(s[i]);
    }
    cout << s << endl;
    return 0;
}