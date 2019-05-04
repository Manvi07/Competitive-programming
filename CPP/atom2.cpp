#include <bits/stdc++.h>
using namespace std;


int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);cout.tie(NULL);
  long long q;
  cin >> q;
  string inp,s="";
  cin.ignore();
  long long int t,v;
  stack <string> st;
  for(auto i=0;i<q;i++)
  {
    cin>>t;
    if(t==1)
    {
      cin>>inp;
      s+=inp;
      st.push(s);
      cout<<s<<endl;
    }
    else if(t==2)
    {
      cin>>v;
      while(v--)
      {
        s.pop_back();
      }st.push(s);
      cout<<s<<endl;
    }
    else if(t==3)
    {
      cin>>v;
      if(!st.empty())
      cout<<st.top()[v-1]<<endl;
      else cout<<endl;
    }
    else
    {
      if(!st.empty())
      {
        st.pop();
        if(!st.empty())
        s=st.top();
        else s="";
        cout<<s<<endl;
      }
    }
  }
  return 0;
}
