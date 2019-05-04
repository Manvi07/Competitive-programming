#include <bits/stdc++.h>
#define $ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main()
{
  $
  int n, k;
  cin >> n >> k;
  multiset<int>m;
  int a,b;
  for(int i=0;i<n;i++)
  {
    cin >> a >> b;
    m.insert(max(a,b));
  }


  long long ans = 0;

  while (k and !m.empty()) {
    ans+= *(m.rbegin());
    m.erase(--m.end());
    k--;
  }

  ans = ans*2;
  cout << ans << endl;
  return 0;
}
