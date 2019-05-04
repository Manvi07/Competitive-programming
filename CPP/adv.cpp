#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        long long n, m, x, y;
        cin >> n >> m >> x >> y;
        n--;
        m--;
        if((n==0 and m==0) or (n==1 and m==1))
        cout << "Chefirnemo\n";
        else if(n==0)
        {
            if(m%y==0)
            cout << "Chefirnemo\n";
            else
            cout << "Pofik\n";
        }
        else if(m==0)
        {
            if(n%x==0)
            cout << "Chefirnemo\n";
            else
            cout << "Pofik\n";
        }
        else if((n%x==0 and m%y==0) or (n%x==1 and m%y==1))
        cout << "Chefirnemo\n";
        else if((x==1 and (m%y==0 or m%y==1)))
        cout << "Chefirnemo\n";
        else if((y==1 and (n%x==0 or n%x==1)))
        cout << "Chefirnemo\n";
        else
        cout <<"Pofik\n";
    }
    return 0;
}