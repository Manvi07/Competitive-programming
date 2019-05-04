#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;
  string s;
  cin>>s;
  vector<char>v(n);
  for(int i=0;i<n;i++)
  v[i]=s[i];

  int i=2;
  while(i <= (n))
    {
        if(n%i==0)
            std::reverse(v.begin(),v.begin()+i);
        i++;
    }
    for(int i=0;i<n;i++)
    cout<<v[i];
    // cout<<
  cout<<endl;
}
