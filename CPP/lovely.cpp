#include <bits/stdc++.h>
#include <cstring>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    string s;
    cin>>s;
    int c=0;
    string p[24]={"chef","chfe","cfhe","cfeh","cefh","cehf","hefc","hecf","hfce","hfec","hcef","hcfe","fceh","fche","fhce","fhec","fech","fehc","efch","efhc","ehcf","ehfc","echf","ecfh"};
    for(int i=0;i<24;i++)
    {
      size_t nPos = s.find(p[i], 0);
    while(nPos != string::npos)
    {
        c++;
        nPos = s.find(p[i], nPos+1);
    }
    }
    if(c!=0)
    cout<<"lovely "<<c;
    else cout<<"normal";
    cout<<endl;
  }
}
