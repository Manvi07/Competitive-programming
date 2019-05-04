#include<bits/stdc++.h>
#define Bob true
#define Alice false
using namespace std;

bool winner = Bob;
int main()
{
    int t;
    long long n, k;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        winner = Bob;
        int i=1;
        while(n>pow(k, i))
        {
            n = n-pow(k, i);
            winner = Alice;
            if(n>=pow(k,i))
            {
                n = n-pow(k, i);
                winner = Bob;
            }
            else break;
            i++;
        }
        if(winner == Bob)
        cout << "Bob\n";
        else
        cout <<"Alice\n";
    }
    return 0;
}