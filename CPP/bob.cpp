#include <bits/stdc++.h>
#define $ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main()
{
    $
    int t;
    cin >> t;
    while(t--)
    {
        bool p[3] = {false};
        string s1, s2;
        cin >> s1 >> s2;
        int c=0;
        for(int i=0; i<3; i++)
        if(s1[i]=='b' || s2[i]=='b')
        {
            c++;
            p[i] = true;
        }
        int h=0;
        if(c<2)
        {
            cout << "no\n";
            continue;
        }
        else if(c==2)
        {for(int i=0; i<3; i++)
        if((s1[i]=='o' or s2[i]=='o') and p[i]==false)
        {
            cout << "yes\n";
            p[i] = true;
            h=1;
            break;
        }
        }
        else if(c==3)
        {for(int i=0; i<3; i++)
        if((s1[i]=='o' or s2[i]=='o'))
        {
            cout << "yes\n";
            p[i] = true;
            h=1;
            break;
        }
        }
        if(!p[0] or !p[1] or !p[2] or !h)
        cout << "no\n";
    }
}