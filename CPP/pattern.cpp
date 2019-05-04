#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, j=0;
        cin >> n;
        int a[n][n]={};
       
        int c=1;
        for(int i=0; i<2*n-1; i++)
        {
            int k=i;j=0;
            if(k>=n) j = k-n+1, k = n-1;
            while(k>=0 and j<n)
            {
                a[j++][k--] = c++;
            }
        }
        for(int i=0 ;i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }
}