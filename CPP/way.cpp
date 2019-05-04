#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int j=1; j<=t; j++)
    {
        int n;
        cin >> n;
        string s, ans ="";
        cin >> s;
        for(int i=0; i<s.size(); i++)
        if(s[i] == 'E')
        ans+='S';
        else
        {
            ans+='E';
        }
        
        cout <<"Case #" <<j << ": "<<ans<<endl;
    }
    return 0;
}