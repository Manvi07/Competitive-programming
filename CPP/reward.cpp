#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a1, a2, a3;
    int b1, b2, b3;
    cin >> a1 >> a2 >> a3;
    cin >> b1 >> b2 >> b3;
    int sum1 = a1+a2+a3;
    int sum2 = b1+b2+b3;
    int n;
    cin >> n;
    if(sum1 and sum2 and n<2)
    cout << "NO\n";
    else
    {
        int ans=0;
        if(sum1%5==0)
        {
            ans += sum1/5;
        }
        else
        {
            ans +=sum1/5+1;
        }
        if(sum2%10==0)
        {
            ans += sum2/10;
        }
        else
        {
            ans += sum2/10 +1;
        }
        if(n>=ans)
        cout << "YES\n";
        else
        cout << "NO\n";
    }
    return 0;
}