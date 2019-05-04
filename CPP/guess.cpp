#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int n;
    cin >> n;
    int A=a, B=b;
    while(n--)
    {
        string s;
        cout<<(a+b)/2 << endl;
        cin >>s;
        
        if( s=="TOO_SMALL")
        {
            a = (a+b)/2;
        }
        else if(s == "TOO_BIG")
        {
            b = (b+a)/2;
        }
        else if(s=="WRONG_ANSWER")
        {
            if(a<A)
            a=A;
            else
            {
                b=B;
            }
            
        }
        else break;
    }
    return 0;
}