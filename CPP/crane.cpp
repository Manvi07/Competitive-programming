#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n,h;
  cin>>n>>h;
  int a,b[n];int c=0;
    for(int i=0;i<n;i++)
    cin>>b[i];
int flag=0;int g=0;
  while(1)
{
  cin>>a;g++;
  if(a==2 && c<n-1)
  c++;
  else if(a==1 && c>0)
  c--;
  else if(a==3 && b[c]>0 && flag==0)
  {b[c]--;flag=1;}
  else if(a==4 && b[c]<h && flag==1)
  {b[c]++;flag=0;}
  else if(a==0)
  break;
}
for(int i=0;i<n;i++)
cout<<b[i]<<" ";cout<<endl;
  return 0;
}
