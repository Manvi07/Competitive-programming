#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
    int t;
    cin>>t;
    while(t--)
    {
      int n;
      cin>>n;
      std::vector<long long int> v(n);
      for(int i=0;i<n;i++)
      cin>>v[i];
      int k;
      cin>>k;
      int j=v[k-1];
      sort(v.begin(),v.end());
      std::vector<long long int> ::iterator it;
      it=find(v.begin(),v.end(),j);
      
      int pos=distance(v.begin(),it);
      cout<<pos+1<<endl;
    }
  return 0;
}
