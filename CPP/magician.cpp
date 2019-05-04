#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, x, s;
        cin >> n >> x >> s;
        bool a[n]= {false};
        a[x-1] = true;
        int s1,s2;
        while(s--)
        {
            cin >> s1 >> s2;
            if(a[s1-1]==true)
            {
                a[s1-1] = false;
                a[s2-1] = true;
            }
            else if(a[s2-1]==true)
            {
                a[s2-1] = false;
                a[s1-1] = true;
            }
        }
        for(int i=0;i<n;i++)
        if(a[i] == true)
        cout << i+1 << endl;
    }
    return 0;
}