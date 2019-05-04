#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
int t;
cin>>t;
while(t--)
{
  int s=0;int n;
  cin>>n;int c=0;
  for(int i=1;s<=n;i++)
  {s+=i;c++;
  if(s>n) c--; }
  cout<<c<<endl;
}
  return 0;
}
