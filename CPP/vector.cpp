#include <bits/stdc++.h>
using namespace std;
int main()
{
  vector <int>v1;
  vector <int>v2;
  vector <int> :: iterator i;
  for(int i=1;i<9;i++)
  v1.set(i);
  for(i=v1.begin();i<v1.end();i++)
  cout<<*i<<" ";
  return 0;
}
