#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  vector<int>v(n);
  for(int i=0; i<n; i++)
  {
    cin >> v[i];
  }
  int low = 0, high = n-1;

  int ans=0;

  while(high>=low)
  {
    int mid = (low+high)/2;
    if(low+1 == high)
    {
      if(v[low]<v[high])
      ans = low;
      else
      ans=high;
      break;
    }
    if((mid == 0 and v[0] <= v[1]) or (mid == n-1 and v[n-1] <= v[n-2]) or (v[mid] <= v[mid+1] and v[mid] <= v[mid-1]))
    {
      // cout << "yo " << v[mid] << endl;
      ans=mid;
      break;
    }
    else if(v[mid] > v[low])
    {
      low = mid;
    }
    else
    high = mid;
  }
  cout << ans << endl;
  return 0;
}
