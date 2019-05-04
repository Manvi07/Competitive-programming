#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, t;
    cin >> t;
    
    while(t--)
    {
        int count_0=0, count_1=0;
        int n;
        cin >> n;
        bool flag = true;
        while(n--)
        {
            cin >> a;
            if(a == 0)
            count_0++;
            else
            count_1++;
            if(count_0>count_1)
            flag = false;
        }
        if(flag)
        cout << "Valid\n";
        else
        cout << "Invalid\n";
    }
    return 0;
}