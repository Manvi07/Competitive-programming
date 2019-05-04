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
  int c = 0;
  for(int i=0;i<n;i++)
  {
    int j=n-1;
    while(j>i and a[j]-a[i]>=k)
    {
      if(a[j]-a[i]>=k)
      {
        c++;
        j--;
      }
    }
  }
  cout << c << endl;
  return 0;
}
