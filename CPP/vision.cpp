#include<bits/stdc++.h>
using namespace std;

double* cross(double a[3],double b[3])
{
  double *res=(double*)malloc(3*sizeof(double));
  res[2]=(a[0]*b[1])+(b[0]*a[1]);
  res[0]=a[1]*b[2]+a[2]*b[1];
  res[1]=a[2]*b[0]+a[0]*b[2];
  return res;
}
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    double p[3];
    cin>>p[0]>>p[1]>>p[2];
    double q[3];
    cin>>q[0]>>q[1]>>q[2];
    double d[3];
    cin>>d[0]>>d[1]>>d[2];
    double c[3];
    cin>>c[0]>>c[1]>>c[2];
    double r;
    cin>>r;
    double *rq=(double*)malloc(3*sizeof(double));
    rq=cross(p,q);
    cout<<rq[0]<<" "<<rq[1]<<" "<<rq[2]<<endl;
  }
  return 0;
}
