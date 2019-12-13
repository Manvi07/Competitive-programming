#include<bits/stdc++.h>
using namespace std;

bool isPower(unsigned long long x, unsigned long long y) 
{ 
    // logarithm function to calculate value 
    int res1 = log(y) / log(x); 
    double res2 = log(y) / log(x); // Note : this is double 
  
    // compare to the result1 or result2 both are equal 
    return (res1 == res2); 
}

int main()
{
  int t;
  cin >> t;
  while(t--)
  {
    unsigned long long n, k;
    cin >> n >> k;
    if(k == 1 or (n/k > k and (n%(k*k)) == 0) or (isPower(k, n) and k != n))
    cout << "NO\n";
    else
    cout << "YES\n";
  }
  return 0;
}
