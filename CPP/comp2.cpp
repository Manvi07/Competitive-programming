#include <iostream>
#include <string>
#include <cstring>
#include <cstdio>
using namespace std;

int main()
{
  string s;
  (cin>>s);
  int i,j,k;
  int n,c=0;
  char a[10000],b[10000];
  cin.getline(a);cout<<"n=n\n";
  while(n--)
  {
  (cin.getline(b).get());
  if(a[0]==1)
  {
    s[a[2]]=a[4];cout<<"hjghfd\n";
  }
  else if(a[0]==2)
  {cout<<"hghfd 2\n";
    for(i=a[6],j=0;i<a[strlen(a)];j++,i++)
    b[j]=a[i];c=0;cout<<b;
    for(i=s[a[2]];i<=s[a[4]];i++)
    {
      if(a[i]==b[0])
      {
        k=i;
        for(j=0;j<b[strlen(b)];j++)
        if(a[i]==b[j])
        i++;else {i=k;}
        if(j==strlen(b))
        c++;
      }
    }
  }cout<<c<<endl;
  }
}
