#include <bits/stdc++.h>
#define $ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main()
{ $
    int a[5][5];
    int I,J;
    for(int i=0;i<5;i++)
    {
        for(int j=0; j< 5;j++)
        {
            cin >> a[i][j];
            if(a[i][j]==1)
            {
                I = i;
                J = j;
            }
        }
    }
    cout << abs(2-J) + abs(2-I) << endl;
    return 0;
}