#include<bits/stdc++.h> 
using namespace std; 
    
long long highestPowerof2(long long n) 
{ 
    long long p = (long long)log2(n); 
    return p; 
} 
    
int main() 
{ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        long long n;
        cin >> n;
        cout << highestPowerof2(n)+1<<endl; 
    }
    return 0; 
} 