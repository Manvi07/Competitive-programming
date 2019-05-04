#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    string st;
    cin>>n>>st;
    int a[7];
    string s[7];
    s[0]="mon";
    s[1]="tues";
    s[2]="wed";
    s[3]="thurs";
    s[4]="fri";
    s[5]="sat";
    s[6]="sun";
    for(int i=0;i<7;i++)
    {a[i]=n/7;}
    n=n-(n/7)*7;
    int i,k;
    while(n>0)
    {
      for(i=0;i<7;i++)
      if(st==s[i])
      {a[i]++;k=i;}
      if(k<6)st=s[k+1];
      else st=s[0];
      n--;
    }
    for(int i=0;i<7;i++)
    cout<<a[i]<<" ";
    cout<<endl;
  }
  return 0;
}
