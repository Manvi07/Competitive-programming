#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  int c=0;
  while(t--)
  {
    string s;

    cin>>s;
    if(s.find("ch") != string::npos || s.find("he") != string::npos  || s.find("ef") != string::npos )
    c++;
  }
  cout<<c<<endl;
  return 0;
}
