#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while (t--) {
    int n;
    cin>>n;
    int a[7];
    for(int i=0;i<7;i++)
    cin>>a[i];int d=0;int i=0;

int c=0;
      for(i=0;i<7;i++)
      {d+=a[i];c++;
      if(d>=n) break;
    else if(i==6) i=-1;}
if(c%7==0)
    cout<<"Sunday";
    else if(c%7==1)
    cout<<"Monday";
    else if(c%7==2)
    cout<<"Tuesday";
    else if(c%7==3)
    cout<<"Wednesday";
    else if(c%7==4)
    cout<<"Thursday";
    else if(c%7==5)
    cout<<"Friday";
    else cout<<"Saturday";
    cout<<endl;
  }
}
