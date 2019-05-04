#include <bits/stdc++.h>
#define $ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main()
{
    int t;
    cin >> t;
    int max = 0, a, b;
    int temp = 0 ;
    while(t--)
    {
        cin >> a >> b;
        temp += b-a;
        if(temp>max)
        {
            max = temp;
        }
    }
    cout << max << endl;
}