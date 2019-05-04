#include<bits/stdc++.h>
#define MAX 1000000007
using namespace std;

void mult(long long int a[2][2],int b[2][2],long long int ans[2][2])
{
  long long int p,q,r,s;
  p=(((a[0][0]*b[0][0])%MAX)+((a[0][1]*b[1][0])%MAX))%MAX;
  q=(((a[0][0]*b[0][1])%MAX)+((a[0][1]*b[1][1])%MAX))%MAX;
  r=(((a[1][0]*b[0][0])%MAX)+((a[1][1]*b[1][0])%MAX))%MAX;
  s=(((a[1][0]*b[0][1])%MAX)+((a[1][1]*b[1][1])%MAX))%MAX;
  ans[0][0]=p;
  ans[0][1]=q;
  ans[1][0]=r;
  ans[1][1]=s;
}
void power(int n,int M[2][2],long long int res[2][2])
{
  int k=n-2;
while(--k)
{
  mult(res,M,res);
}
}

long long int fibo(int n,long long int a,long long int b)
{
  long long int r[2][2]={{1,1},{1,0}};
    int mat[2][2]={{1,1},{1,0}};
  if(n==1)
  return a;
  else if(n==2)
  return b;
  power(n,mat,r);
  return (((r[0][1]*a)%MAX)+((r[0][0]*b)%MAX))%MAX;
}
int main()
{
  int t;
  cin>>t;
  while (t--) {
    int n,m;
    cin>>m>>n;
    long long int a[m];
    long long int b[m];

    long long int sum1=0,sum2=0;
    for(int i=0;i<m;i++) {
      cin>>a[i];
      sum1=((sum1%MAX)+(a[i]%MAX))%MAX;
    }
    for(int i=0;i<m;i++) {
      cin>>b[i];
      sum2=((sum2%MAX)+(b[i]%MAX))%MAX;
    }
    int r=0;
    // for(int i=0;i<m;i++)
    // {for(int j=0;j<m;j++)
    //   {
        long long int y=fibo(n,((sum1%MAX)*(m%MAX)),((sum2%MAX)*(m%MAX))%MAX);
        r=((r%MAX)+(y%MAX))%MAX;
    //   }
    // }
  cout<<r<<endl;
  }
  return 0;
}
