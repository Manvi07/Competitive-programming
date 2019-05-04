#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    int n, a, b;
    while(t--)
    {cin >> n >> a >> b;
    vector<int> v(n);
    int bob= 0 , alice = 0;
    for(int i=0; i<n; i++)
    {
        cin >> v[i];
        if(v[i]%a == 0)
        bob++;
        else if(v[i]%b == 0)
        alice++;
    }
    if(alice >= bob)
    cout << "ALICE\n";
    else
    cout << "BOB\n";}
    return 0;
}
