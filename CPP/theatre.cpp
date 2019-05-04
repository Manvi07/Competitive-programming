#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long n,m,a;
  cin >> n >> m >> a;
  long long cN = 0, cM = 0;
  cN = ceil(double(n)/double(a));
  cM = ceil(double(m)/double(a));
  cout << cM*cN << endl; 
  return 0;
}
