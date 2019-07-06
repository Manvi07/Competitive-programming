#include <bits/stdc++.h>
using namespace std;

long long mod = 1000000007;
int exponentMod(int A, unsigned int B, long long C) 
{ 
    // Base cases 
    if (A == 0) 
        return 0; 
    if (B == 0) 
        return 1; 
  
    // If B is even 
    long y; 
    if (B % 2 == 0) { 
        y = exponentMod(A, B / 2, C); 
        y = (y * y) % C; 
    } 
  
    // If B is odd 
    else { 
        y = A % C; 
        y = (y * exponentMod(A, B - 1, C) % C) % C; 
    } 
  
    return (int)((y + C) % C); 
} 

long long ans;
int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while(t--)
	{
		unsigned int k;
		cin >> k;
		ans = (exponentMod(2,k-1, mod)%mod)*(10%mod);
		cout << ans%mod << endl;
	}
	return 0;
}