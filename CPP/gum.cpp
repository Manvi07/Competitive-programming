#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n,k;
  cin >> n >> k;
  long long a[n];
  for(int i=0;i<n;i++)
  cin >> a[i];
  sort(a,a+n);

  long long c = 0;
  int l = 0,r = n-1;
  
  while(l<r)
  {
    if(a[l]+a[r]<k)
    {
      c += r-l;
      l++;
    }
    else
    r--;
  }
  cout << c << endl;
  return 0;
}
