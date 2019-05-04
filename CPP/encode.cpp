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
        int l, n;
        cin >> n;
        string s;
        cin >> s;
        if(n%2==0)
        l = n;
        else l = n-1;
        for( int i=1;i<l;i+=2)
        swap(s[i],s[i-1]);
        for(int i=0;i<n;i++)
        {
            int h = 'z'-int(s[i]);
            cout << char('a'+h);
        }
        cout << endl;
    }

}