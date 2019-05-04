#include <bits/stdc++.h>
#define $ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int p = a+b*c;
    int q = a*(b+c);
    int r = a*b*c;
    int t = (a+b)*c;
    int u = a+b+c;
    int v = a*b+c;
    set<int>s;
    s.insert(p);
    s.insert(q);
    s.insert(r);
    s.insert(t);
    s.insert(u);
    s.insert(v);
    cout << *(s.rbegin()) << endl;
}