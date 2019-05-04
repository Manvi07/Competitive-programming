#include <bits/stdc++.h>
using namespace std;
class Box{
  int h,k;
public:
  Box(int r=0,int j=0){h=r;k=j;}
  Box operator+(int &l);
  {
    return h+l.h;
  }
};

int main()
{
  ios::sync_with_stdio(false);
  Box d(10,4);
  Box p(5,9);
  cout<<d+p<<endl;
  return 0;
}
