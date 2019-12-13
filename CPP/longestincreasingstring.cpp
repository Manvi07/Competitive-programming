#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  vector<int>v(n);
  for(int i=0; i<n; i++){
    cin >> v[i];
  }
  int len=1, max_len=1, start=0, end=0, current_start=start, current_end=end;
  for(int i=1; i<n; i++)
  {
    if(v[i]>v[i-1])
    {
      len++;
      current_end++;
    }
    if(max_len<len)
    {
      max_len=len;
      end=current_end;
      start=current_start;
    }
    else if(v[i]<=v[i-1])
    {
      len=1;
      current_start=current_end=i;
    }
  }
  for(int i=start; i<=end; i++)
  {
    cout << v[i] << " ";
  }
  cout << endl;
  return 0;
}
