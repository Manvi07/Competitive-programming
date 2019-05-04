#include <iostream>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int min=a[0];
    for(int i=1;i<n;i++)
    if(min>a[i])
    min=a[i];
    printf("%d\n",k>min?k-min:0);
}return 0;
}
