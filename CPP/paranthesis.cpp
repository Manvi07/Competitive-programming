#include <bits/stdc++.h>
using namespace std;
int main()
{
  vector <char>a;
  //vector <char> :: iterator j;
  string s;
  cin>>s;
  // a.push_back('v');
  // a.push_back(s);
  // for(j=a.begin();j<a.end();j++)
  // cout<<*j;
  int p=0;
  for(int i=0;i<s.size();i++)
  if(s[i]=='(' || s[i]=='{' || s[i]=='[')
  a.push_back(s[i]);
  else if(s[i]==')')if(a.empty() || a.back()!='(')
  {p++;
    cout<<"Not\n";break;
  }else a.pop_back();
  else if(s[i]=='}') if(a.empty() || a.back()!='{' )
  {p++;
    cout<<"Not\n";break;
  }  else a.pop_back();
  else if(s[i]==']') if(a.empty() || a.back()!='[')
  {p++;
    cout<<"Not\n";break;
  }else a.pop_back();
  if(p==0)
  if(a.empty())
  cout<<"Yes!\n";
  else cout<<"Not\n";
  cout<<"Balanced"<<endl;
}
