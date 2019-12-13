#include <bits/stdc++.h>
using namespace std;

int catalan(int n)
{
  std::vector<int> v(n+1, 0);
  v[0] = v[1] = 1;
  for (auto i = 2; i <=n; i++) {
    for(int j=0; j<i; j++)
    v[i] += v[j]*v[i-j-1];
    // cout << v[i] << endl;
  }
  return v[n];
}

int main()
{
  int n;
  cin >> n;
  cout << catalan(n) << endl;
  return 0;
}
