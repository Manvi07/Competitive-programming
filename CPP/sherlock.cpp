#include <iostream>
#include <algorithm>
int main()
{
  using namespace std;
  int t;
  cin>>t;
  while(t--)
  {
    int n,k,p;
    cin>>n>>k>>p;
    int m=0;
    int a[k];int j,l;int b[n-k];
    for(int i=0;i<k;i++)
    cin>>a[i];
    for(int i=1,j=0;i<n,j<n-k;i++)
    {
      int c=0;
      for(l=0;l<k;l++)
      if(a[l]==i)
      c++;
      if(c==0)
      {
        b[j]=i;j++;
      }
    }
    for(int i=0;i<n-k;i++)
    if(i==p)
    {printf("%d\n",b[i]);m++;}
    if(m==0)
    printf("-1\n");
  }
return 0;
}
