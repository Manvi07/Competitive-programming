#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int M[n][n];
        vector<int> zero_row;
        for(int i=0; i<n; i++)
        {
            int zero_count = 0;
            for(int j=0; j<n; j++)
            {
                cin >> M[i][j];
                if(M[i][j] == 0)
                zero_count++;
            }
            if(zero_count == n)
            {
                zero_row.push_back(i);
            }
        }
        
        bool soln = false;
        for(int i=0; i<zero_row.size(); i++)
        {
            int one_count = 0;
            for(int j=0; j<n; j++)
            {
                if(M[j][zero_row[i]] == 1)
                    one_count++;
            }   
            if(one_count == n-1)
            {
                soln = true;
                cout << zero_row[i]+1 << endl;
                break;
            }
        }
        if(!soln)
        cout << -1 << endl;

    }
    return 0;
}
