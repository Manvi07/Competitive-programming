#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int y, b, r;
    cin >> y >> b >> r;
    int Min = min(y, min(b, r));
    int ans = 0;
    if(Min == y)
    {
        if(b>=y+1 and r>=2+y)
        {
            ans = 3+3*y;
        }
        else if(r>=2+y)
        {
            ans = 3*b;
        }
        else
        {
            ans = 3*r -3;
        }
    }
    else if(Min == b)
    {
        if(r>=1+b)
        {
            ans = 3*b;
        }
        else
        {
            ans = 3*r-3;
        }
    }
    else
    ans = 3*r - 3;
    cout << ans << endl;
    return 0;
}
