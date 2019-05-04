#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    long long int n;
    cin>>n;
    vector<long long int>v(n);
    for(int i=0;i<n;i++)
    cin>>v[i];
    std::vector<long long int>::iterator it;
    it=min_element(v.begin(),v.end());
    int min_pos = distance(v.begin(),it);

    cout<<min_pos+1<<endl;
  }
  return 0;
}
