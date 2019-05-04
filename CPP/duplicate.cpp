#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int p[10000]={};
  vector<int>a(n);
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
    p[a[i]]++;
  }
  for(int i=0;i<10000;i++)
  if(p[i] && a.size()>=1)
  for(int j=0;j<n;j++)
  if(a[j]==i && p[i]>1)
  {a[j]=0;p[i]--;}int s=0;
  for(int i=0;i<n;i++)
  if(a[i])s++;
  cout<<s<<endl;
  for(int i=0;i<a.size();i++)
  if(a[i])
  cout<<a[i]<<" ";
  cout<<endl;
  return 0;
}
