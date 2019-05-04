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
  stack <string> st;
  for(int i=0;i<q;i++)
  {
    getline(cin, inp);
    if(inp[0]=='1')
    {
      s.append(inp.begin()+2,inp.end());//cout<<s<<endl;
      st.push(s);
    }
    else if(inp[0]=='2')
    {
      stringstream ss(inp);
      string p1;
      ss >> p1;
      ss >> p1;
      long int g = stoi(p1);
      while(g--)
        s.pop_back();//cout<<s<<endl;
      st.push(s);
    }
    else if(inp[0]=='3')
    {
      stringstream ss(inp);
      string p1;
      ss >> p1;
      ss >> p1;
      long int g = stoi(p1);
      cout<<st.top()[g-1]<<endl;
    }
    else if(inp[0]=='4')
    {
      if(!st.empty())
      {
        st.pop();
        if(!st.empty())
        s=st.top();
        else s="";
       // cout<<s<<endl;
      }
    }
  }
  return 0;
}
