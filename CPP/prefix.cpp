#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
int t;
cin>>t;
while (t--)
{
  long long int n;
  string s;
  cin>>s>>n;
  int count_a=0,count_b=0;
  long long int ans=0;
  for(auto i=0;i<s.length();++i)
{
  if(s[i]=='a')
  count_a++;
  else if(s[i]=='b')
  count_b++;
  if(count_a>count_b)
  ans++;
}
if(count_a==count_b)
ans=n*ans;
else if(count_a<count_b)
{
  int temp=ans  ;int k=0;
    count_a=count_b=ans=0;
    while(temp!=0 and k<n)
    {
      temp=0;k++;
      for(auto i=0;i<s.length();++i)
    {
      if(s[i]=='a')
      count_a++;
      else if(s[i]=='b')
      count_b++;
      if(count_a>count_b)
      {ans++;temp++;}}
    }
}
else
{int temp=0;int k=0;
  count_a=count_b=ans=0;
  while(temp!=s.length() and k<n)
  {
    temp=0;k++;
    for(auto i=0;i<s.length();++i)
  {
    if(s[i]=='a')
    count_a++;
    else if(s[i]=='b')
    count_b++;
    if(count_a>count_b)
    {ans++;temp++;}}
  }
  if(k<n)
  ans=ans+ (n-k)*s.length();
}
cout<<ans<<endl;

}
  return 0;
}
