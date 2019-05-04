#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int t;
    cin >> t;
    while(t--)
    {
      cin >> s;
      char f, b;
      auto i = s.begin();
      std::vector<pair<int, int> > v;
      int k=0;
      while(i!= s.end())
      {
        if(*i != '.')
        {
          v.push_back({(*i-'0'), k});
        }
        i++;k++;
      }
      // for(auto j : v)
      // {
      //   cout << j.first <<" "<< j.second << endl;
      // }
      bool flag = true;
      for(int z=1; z<v.size(); z++ )
      {
        if(v[z].first + v[z-1].first >= v[z].second - v[z-1].second)
        {
          flag = false;
          break;
        }
      }
      if(flag)
      cout << "safe\n";
      else
      std::cout << "unsafe" << '\n';
    }
}
