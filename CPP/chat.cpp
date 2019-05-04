#include <bits/stdc++.h>
#define $ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main()
{
    string s;
    cin >> s;
    int temp=0;
    int c=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='h')
        {
            temp = i;
            c++;
            break;
        }
    }
    for(auto i=0; i< s.size(); i++)
    {
        if(s[i]=='e' and i>temp)
        {
            temp = i;
            c++;
            break;
        }
    }
    int l=0;
    for(auto i=0; i< s.size(); i++)
    {
        if(s[i]=='l' and i>temp)
        {
            l++;
            temp = i;
            c++;
            if(l==2)
            break;
        }
    }
    
    for(auto i=0; i< s.size(); i++)
    {
        if(s[i]=='o' and i>temp)
        {
            temp = i;
            c++;
            break;
        }
    }
    if(c==5)
    cout << "YES\n";
    else
    cout << "NO\n";
    return 0;
}