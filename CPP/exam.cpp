#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    int n;
    while(t--)
    {
        cin >> n;
        int a, b, obt = 0, total=0;
        for(int i=0; i<n; i++)
        {
            cin >> a >> b;
            obt += a;
            total += b;
        }
        total = total/2;
        if(obt > total)
        cout << "Pass\n";
        else
        cout << "Fail\n";
    }
    return 0;
}
