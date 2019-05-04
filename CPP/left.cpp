#include <bits/stdc++.h>
#define $ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main()
{
  $
  int c=0;
  string s1, s2;
  cin >> s1 >> s2;
  reverse(s1.begin(), s1.end());
  reverse(s2.begin(), s2.end());
  bool check = true;
  for(int i=0;i<min(s1.size(), s2.size());i++)
  if(s1[i]==s2[i])
  c++;
  else break;
  int ans = s1.size()+s2.size()-c-c;
  cout<<ans<<endl;
  return 0;
}
