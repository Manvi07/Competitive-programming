#include<bits/stdc++.h>
using namespace std;

int main()
{
  int a, t;
  cin >> t;
  while(t--)
  {
    int m, n;
    cin >> n >> m;
    bool jobs[n] = {false};
    for(int i=0; i<m; i++)
    {
      cin >> a;
      jobs[a-1] = true;
    }
    vector<int> chef, assistant;
    int k=0;
    for(int i=0; i<n ;i++)
    {
      if(!jobs[i] and k==0)
      {
        chef.push_back(i+1);
        k = 1;
      }
      else if(!jobs[i] and k==1)
      {
        assistant.push_back(i+1);
        k = 0;
      }
    }
    for(auto i : chef)
    cout << i << " ";
    cout << endl;
    for(auto i : assistant)
    cout << i << " ";
    cout << endl;
  }
  return 0;
}