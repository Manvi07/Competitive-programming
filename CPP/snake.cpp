#include<bits/stdc++.h>
using namespace std;





int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string s1, s2;
        cin >> s1 >> s2;
        int matrix[n][n];
        int cnt=0;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                matrix[i][j] = 0;
            }

            if(s1[i] == '#')
            {
                matrix[0][i] = 1;
                matrix[i][0] = 1;
                cnt++;
            }
            if(s2[i] == '#')
            {
                cnt++;
                matrix[1][i] = 1;
                matrix[i][1] = 1;
            }
        }
        bool visited[cnt];
        for(int i=0; i<cnt; i++)
        {
            visited[i] = false;
        }
        dfs(visited, matrix, );
    }
}