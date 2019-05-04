#include<bits/stdc++.h>
using namespace std;
int main()
{
    int c;
    int sum =0 ;
    for(int i=0;i<5;i++)
    {
        cin >> c;
        sum += c;
    }
    if(sum%5==0 and sum)
    cout << sum/5 << endl;
    else
    cout << -1 << endl;
    return 0;
}