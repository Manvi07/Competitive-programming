#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    string s;
    cin >> s;
    int n = s.size();
    string ans="";
    for(int i=0;i<s.size();)
    {
        if(i<n-2 and s[i]=='W' and s[i+1]=='U' and s[i+2]=='B')
        {
            i=i+3;
            ans += " ";
        }
        else
        {ans += s[i];i++;}
    }
    int i=0;
    for(i=ans.size()-1; i >= 0; i-- )
    {
        if(ans[i]==' '&& ans[i]==ans[i-1]) 
        {
            ans.erase( ans.begin() + i );
        }
    }
    if(ans[0]==' ')
    ans.erase(ans.begin());
    cout << ans << endl;
    return 0;
}
