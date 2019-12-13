#include<bits/stdc++.h>
using namespace std;

long long commDiv(long long a) 
{ 
    // find gcd of a,b 
    long long n = a;
  
    // Count divisors of n. 
    long long result = 0; 
    for (int i=1; i<=sqrt(n); i++) 
    { 
        // if 'i' is factor of n 
        if (n%i==0) 
        { 
            // check if divisors are equal 
            if (n/i == i) 
                result += 1; 
            else
                result += 2; 
        } 
    } 
    return result; 
} 

int main()
{
    int n;
    cin >> n;
    vector<long long>v(n);

   long long gcd = 0;
    for(int i=0; i<n; i++)
    {
        cin >> v[i];
        gcd = __gcd(gcd, v[i]);
    }
    // cout << gcd << endl;
    cout << commDiv(gcd) << endl;
    return 0;
}