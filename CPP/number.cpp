#include <bits/stdc++.h>
#define $ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int highestPowerof2(int n)
{
   int p = (int)log2(n);
   return (int)pow(2, p); 
}
 
int nextPowerOf2(int n)
{
    int p = 1;
    if (n && !(n & (n - 1)))
        return n;
 
    while (p < n) 
        p <<= 1;
     
    return p;
}

int main()
{
    $
    int t;
    cin >> t;
    while(t--)
    {        
        long long n;
        cin >> n;
        long long left = n - highestPowerof2(n);
        long long add = nextPowerOf2(left) - left;
        long long sub = left - highestPowerof2(left);
        long long ans = min(add, sub);
        if(left==0)
        ans = 1;
        if(ans==add && add!=sub)
        {
            if(add+left == highestPowerof2(n))
            ans++;
        }
        else if(ans==sub and add!=sub)
        {
            if(left-sub == highestPowerof2(n))
            ans++;
        }
        cout<<ans<<endl;
    }
}