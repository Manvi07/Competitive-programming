#include<bits/stdc++.h>
using namespace std;

int mod(string num, int a) 
{ 
    // Initialize result 
    int res = 0; 
  
    // One by one process all digits of 'num' 
    for (int i = 0; i < num.length(); i++) 
         res = (res*10 + (int)num[i] - '0') %a; 
  
    return res; 
} 
string comp(string a, string b)
{
    if(b.size() > a.size())
    return b;
    else if(a.size() > b.size())
    return a;
    for(int i = 0; i < a.length(); ++i)
        if ((a[i] - '0') < (b[i] - '0'))
        { 
            return b; 
        }
    return a;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, ans=0;
        string k;
        cin >> n >> k;
        if(k.size() <= 6 and stoi(k) <= 1000)
        {
            if(n>stoi(k))
            {
                if(stoi(k) == n-stoi(k))
                ans = n-1;
                else
                ans = 2*min(stoi(k), n-stoi(k));
            }
            else if(n==stoi(k))
            ans = 0;
            else
            {
                int temp = stoi(k)%n;
                if(temp == n-temp)
                ans = n-1;
                else
                ans = 2*min(temp, n-temp);
            }
        }
        else
        if(comp(k, to_string(n)) == to_string(n))
        {
            int K = stoi(k);
            if(K == n-K)
            ans = n-1;
            else
            ans = 2*min(K, n-K);
        }
        else if(to_string(n)==k)
        ans = 0;
        else
        {
            int temp = mod(k, n);
            if(temp == n-temp)
            ans = n-1;
            else
            ans = 2*min(temp, n-temp);
        }
        cout << ans << endl;
    }
    return 0;
}