#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    string s1,s2,s3;
    cin>>s1>>s2;
    for(int i=0;i<s1.size();i++)
    if(s1[i]==s2[i] && s1[i]=='W')
    s3+='B';
    else if(s1[i]==s2[i] && s1[i]=='B')
    s3+='W';
    else s3+='B';s3[s1.size()]='\n';
    //for(int i=0;i<s1.size();i++)
    cout<<s3;
    cout<<endl;
  }
}
