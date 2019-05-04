#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  float a,b;
  cin>>a>>b;
  char c;
  cin>>c;
  if(c=='+')
  printf("%0.6f\n",a+b );
  else if(c=='-')
  printf("%0.6f\n",a-b );
  else if(c=='*')
  printf("%0.6f\n",b*a );
  else printf("%0.6f\n",a/b );
  return 0;
}
