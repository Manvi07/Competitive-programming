#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++)
    {
      cin >> v[i];
    }
    int ans=0, m = v[n-1];
    for(int i=n-2; i>=0 ; i--)
    {
      if(v[i] <= m)
      {
        m = v[i];
      }
      else
      ans++;
    }
    cout << ans << endl;
  }
  return 0;
}
