#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    string s;
    map<string, int>m;
    cin >> s;
    for(int i=0;i<n-1;i++)
    {
        string p = s.substr(i,2);
        m[p]++;
    }
    int ans=0;
    string h;
    for(map<string,int>::iterator it=m.begin();it!=m.end();it++)
    if(ans<it->second)
    {
        ans=it->second;
        h = it->first;
    }
    cout<<h<<endl;
    return 0;
}