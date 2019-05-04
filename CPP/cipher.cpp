#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s;
    cin>> n;
    cin >> s;
    string a = "";
    int k=1;
    for(int i=0; i<n; i+=k)
    {
        a += s[i];
        k++;
    }
    cout << a << endl;
    return 0;
}