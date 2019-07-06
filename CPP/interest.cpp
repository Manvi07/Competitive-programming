#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while(1)
    {
        int sm =0;
        string s = to_string(n);
        for(int i=0; i<s.size(); i++)
            sm += int(s[i] - '0');
        if(sm%4 == 0)
        break;
        n++;
    }
    cout << n << endl;
    return 0;
}