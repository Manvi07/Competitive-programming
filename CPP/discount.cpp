#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    int p[n],q[n],d[n];
    double a;
    for(int i=0;i<n;i++)
    cin>>p[i]>>q[i]>>d[i];
    double loss=0;
    for(int i=0;i<n;i++)
    {
      a=0;
      a=double(p[i]+(p[i]*(d[i]/100.00)));
      a=a-(a*d[i]/100.00);
      loss+=q[i]*(p[i]-a);
    }
    printf("%lf",loss);
    std::cout << '\n';
  }
  return 0;
}
