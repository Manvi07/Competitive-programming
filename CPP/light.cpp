#include<bits/stdc++.h>
using namespace std;

int main()
{
  long long int n,m;
  cin>>n>>m;
  long long int num;
  list<long long int>l;
  int dif=0;
  for(int i=0;i<n;i++)
  {
    cin>>num;

    l.push_back(num);
    if(i>0 and i%2==0)
    {dif=max(dif,l[i]-l[i-1]);int k=i-1;}

  }
  list<long long int>::iterator it=l.begin();
  long long int ans=*it;

  return 0;
}
