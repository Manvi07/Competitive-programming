#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int n; string t;
    cin >> n >> t;
    string s = "";
    if(t.size()==1)
    {
        for(int i=0;i<n;i++)
        s += t;
    }
    else
    {
        if(n==1)
        s = "-1";
        else
        {
            s = "1";
            for(int i=0; i < n-1; i++)
            s += "0";
        }
    }
    cout << s << endl;
    
    return 0;
}