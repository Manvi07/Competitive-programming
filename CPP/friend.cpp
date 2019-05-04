#include <bits/stdc++.h>
using namespace std;

void swap(int *a,int *b)
{
  int *temp=new int;
  *temp=*a;
  *a=*b;
  *b=*temp;
  free(temp);
}

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n,k;
    cin>>n>>k;
    vector<int>motu;
    vector<int>tomu;
    long long int s1=0,s2=0;
    for(int i=0;i<n;i++)
  {
    int a;
    cin>>a;
    if(i%2==0)
    {motu.push_back(a);s1+=a;}
    else
    { tomu.push_back(a);s2+=a;}
  }
    if(s2>s1)
    printf("YES\n");
    else
    {
      sort(motu.begin(),motu.end());
      sort(tomu.begin(),tomu.end());
      while(s1>=s2 && k-- && motu[motu.size()-1]>tomu[0])
      {
          swap(&motu[motu.size()-1],&motu[motu.size()-1]);
          s1=s1-motu[motu.size()-1]+tomu[0];
          s2=s2+motu[motu.size()-1]-tomu[0];
          sort(motu.begin(),motu.end());
          sort(tomu.begin(),tomu.end());
      }
      if(s1>=s2)
      cout<<"NO\n";
      else cout<<"YES\n";
    }
  }
  return 0;
}
