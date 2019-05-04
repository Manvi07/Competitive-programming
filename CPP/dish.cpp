#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    string s1[4],s2[4];int c=0;
    for(int i=0;i<4;i++)
    cin>s1[i];
    for(int i=0;i<4;i++)
    cin>>s2[i];
    for(int i=0;i<4;i++)
    for(int j=i+1;j<4;j++)
    if(strcmp(s1[i],s2[j])==0)
    c++;
    if(c>=2)
    cout<<"similar\n";
    else cout<<"dissimilar\n";
  }
}
