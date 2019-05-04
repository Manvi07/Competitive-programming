#include <bits/stdc++.h>
#define $ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main()
{
    $
    int n;
    cin >> n;
    int a;
    int c1=0, c2=0, c3=0, ans=0;
    for(int i=0; i<n; i++)
    {
        cin >> a;
        if(a==1)
        c1++;
        else if(a==2)
        c2++;
        else if(a==3)
        c3++;
        else
        ans++;
    }
    ans += min(c1,c3);
    if(c1>c3)
    {
        c1 = c1 - c3;
        c3 = 0;
    }
    else
    {
        c3 = c3 - c1;
        c1 = 0;
    }
    ans += c2/2;
    if(c2%2!=0)
    {
        c2 = 1;
        if(c1==0)
        ans += 1 + c3;
        else
        {
            ans += ceil((double)c1/4.00);
            if(c1%4==3 or c1%4==0)
            ans++;
        }
    }
    else
    {
        if(c1==0)
        ans += c3;
        else ans += ceil((double)c1/4.00);
    }
    cout << ans << endl;
    return 0;
}