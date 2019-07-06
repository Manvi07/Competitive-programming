#include <bits/stdc++.h>
using namespace std;


long long ans;
long long k, n, a, b;
int main()
{
    int q;
    cin >> q;
    while (q--)
    {
        cin >> k >> n >> a >> b;
        if(k/b < n or (k/b == n and k%b == 0))
            ans = -1;
        else
        {
            // cout << "else1\n";
            ans = 0;
            long long n1 = k/a;
            if(k%a == 0)
            n1--;
            if(n1 >= n)
            ans = min(n1, n);
            else
            {
                // cout << "else2\n";
                int temp = k%a==0?a:k%a;
                int only_b = temp/b;
                if(temp%b == 0)
                    only_b--;
                if(n1 + only_b >= n)
                ans = n1;
                else
                {
                    // cout << "else3\n";
                    while(n1>=0 and (n1+only_b) < n)
                    {
                        n1--;
                        temp = temp+a;
                        only_b = temp/b;
                        if(temp%b == 0)
                            only_b--;
                    }
                    ans = n1;
                }
                
            }                   
        }
        cout << ans << endl;
    }
}