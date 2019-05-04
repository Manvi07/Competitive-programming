#include <bits/stdc++.h>
using namespace std;

int n;
int yb, mb, db;
int yc, mc, dc;
long double sum;
long double age = 0;
int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while(t--)
    {
        sum = age = 0;
        cin >> n;
        int a[n];
        for(int i=0; i<n;i++)
        cin >> a[i];
        for(int i=0; i<n; i++)
        {
            sum += a[i];
        }
        cin >> yb >> mb >> db;
        cin >> yc >> mc >> dc;
        if(yc == yb)
        {
            if(mc == mb)
            {
                age += dc - db + 1;
            }
            else
            {
                age += a[mb-1] - db + 1;
                for(int i=mb; i<mc-1; i++)
                age += a[i];
                age += dc;
            }
        }
        else
        {
            age += a[mb-1] - db + 1;
            for(int i=mb; i<n; i++)
                age += a[i];
            for(int i=yb+1; i<yc; i++)
                age += sum;
            for(int i=0; i<mc-1; i++)
                age += a[i];
            age += dc;
        }        
        for(int i=yb; i<yc; i++)
        if(i%4 == 0)
            age ++;
            cout << age << endl;
    }
    return 0;
}
