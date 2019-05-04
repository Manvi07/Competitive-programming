#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n,k;
    cin>>n>>k;

    string s[n];
    for(int i=0;i<n;i++)
    cin>>s[i];
    vector<vector<string> >v(k);
    for(int i=0;i<k;i++)
    {
      int size;
      cin>>size;
      v[i].resize(size);
      for(int j=0;j<size;j++)
      cin>>v[i][j];
    }
    for(int q=0;q<n;q++)
      for(int i=0;i<k;i++)
    {
      int p=0;
      for(int j=0;j<v[i].size();j++)
        if(v[i][j]==s[q])
        {
          cout<<"YES ";
          p=1;
          break;
        }
        if(p==1)
        break;
        else if(p==0 and i==k-1)
        cout<<"NO ";
    }
    cout<<endl;
  }
  return 0;
}
