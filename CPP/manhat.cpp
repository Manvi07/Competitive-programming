#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >>t ;
    while(t--)
    {
        int k=0;
        cout << "Q " ;
        int x, y;
        x=y=1;
        cout << x << " " << y << endl;
        cin >> k;
        int num=0;
        while(num !=2 )
        {
            int a=k, b=0;
            
            while(k!=0 && a>0)
            {
                x=x+a;
                y=y+b;
                cout << "Q ";
                cout << x << " " << y;
                cin >> k;
                if(k==0)
                {
                    num++;
                }
                a--;
                b++;
            }
            cout << "Q ";
            cout << x << " " << y;
            cin >> k;
            if(k==0)
            num++;
        }
    }
    return 0;
}