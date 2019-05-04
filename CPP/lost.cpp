#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    multiset<long long int>s;
    long long int num;
    bool check=true;
  do{
      cin>>num;
      s.insert(num);
      if(cin.get()=='\n')
      {
        check=false;
      }
    }while(check);
    multiset<long long int>::iterator it;
    it=s.find(s.size()-1);
    check=true;
    for(multiset<long long int>::reverse_iterator i=s.rbegin();i!=s.rend();++i)
    {
      if(*i==*it and check==true)
      check=false;
      else if(*i!=*it || (*i==*it and check==false))
      {cout<<*i<<endl;break;}
    }
  }
  return 0;
}
