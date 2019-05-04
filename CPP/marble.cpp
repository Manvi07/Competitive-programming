#include <bits/stdc++.h>
using namespace std;
long long int nCr(int n, int r)
{
    long long int C[r+1];
    memset(C, 0, sizeof(C));
    C[0] = 1;
    for (int i = 1; i <= n; i++)
    {
          for (int j = min(i, r); j > 0; j--)
            C[j] = (C[j] + C[j-1]);
    }
    return C[r];
}
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n,k;
    cin>>n>>k;
    std::cout << nCr(n-1,k-1) << '\n';
  }
  return 0;
}
