#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n,k;
  cin>>n>>k;
  // deque<int>g(n);
  // // deque <int> :: iterator it;
  //   for (int i=0;i<n;i++)
  //     {
  //       cin>>g[i];
  //     }
  //     deque <int> :: iterator it;
  //   for (it = g.begin(); it != g.end(); ++it)
  //   {
  //     if((*it)<=k)
  //     pop_front
  //   }
  //
  int a[n];
  for(int i=0;i<n;i++)
  cin>>a[i];
  int i=0;
  int j=n-1;
  int c=0;
  while(i<n)
  {
    if(a[i]<=k)
    {c++;i++;}
    else break;
  }
  while(j>i)
  {
    if(a[j]<=k)
    {c++;j--;}
    else break;
  }
  cout<<c<<endl;
    return 0;

}
