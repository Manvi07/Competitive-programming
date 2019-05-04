#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int g[31];
    for(int i=0;i<30;i++)
    cin>>g[i];
    int c=0,j=0;
    for(int i=0;i<30;)
    {if(g[i]==1)
    {while(g[i]==1)
    {i++;c++;}if(c>5){j=4;cout<<"#coderlifematters\n";break;}
    else c=0;i++;}
  else i++;}
    if(j==0)cout<<"#allcodersarefun\n";
  }
  return 0;
}
