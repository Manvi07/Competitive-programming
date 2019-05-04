#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin>>t;
  while(t--)
  {
    long long int l,r,c=0;
    cin>>l>>r;
    for(int i=l;i<=r;i++)
    if(i%10==2 || i%10==3 || i%10==9)
    c++;
    cout<<c<<endl;
  }
  return 0;
}
