#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while(t--)
  {
    int n;
    int maxscore= 0;
    cin >> n;
    vector<int> a(n), b(n);
    for(int i=0; i<n; i++)
    cin >> a[i];
    for(int i=0; i<n; i++)
    {
      cin >> b[i];
      int temp = (20*a[i] - 10*b[i]);
      maxscore = max(maxscore, temp);
    }
    cout << maxscore << endl;
  }
  return 0;
}
