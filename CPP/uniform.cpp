#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    string s;
    cin>>s;
    int n=0;
    if(s[0]!=s[7])n=1;
    for(int i=1;i<8;i++)
    if(s[i-1]!=s[i])
    n++;
    // cout<<n<<endl;
    if(n<=2)
    cout<<"uniform\n";
    else cout<<"non-uniform\n";
  }
  return 0;
}
