#include <bits/stdc++.h>
using namespace std;

int n;
map<pair<int, int>, bool>M;
vector<pair<int, int> >path;
string ans = "NO";
void findPath(vector<vector<int> >v, int &m, int &p)
{
    if(m == n-1 and p == n-1)
    {
        ans =  "YES";
        return;
    }
    int i=m, j=p;
    bool flag = false;
    // cout << i << " " << j << endl;
    // cout << M[{i, j+1}] << endl;
    // for(int i=m; i<n; i++)
    // {
    //     for(int j=p; j<n ;j++)
    //     {
            if(i+1<n and v[i+1][j]%2 == 0 and M[{i+1, j}] == false)
                {
                    // cout << "one";
                    // cout << i+1 <<" "<<j<< endl;
                    flag = true;
                    path.push_back({i+1, j});
                    M[{i+1, j}] = true;
                    int temp = i+1;
                    findPath(v, temp, j);
                    path.pop_back();
                    M[{i+1, j}] = false;
                } 
            if(j+1<n and v[i][j+1]%2 == 0 and M[{i, j+1}] == false)
                {
                    // cout << i <<" "<<j+1<< endl;
                    flag = true;
                    path.push_back({i, j+1});
                    M[{i, j+1}] = true;
                    int temp = j+1;
                    findPath(v, i, temp);
                    path.pop_back();
                    M[{i, j+1}] = false;
                }
    //     }
    // }
    if(!(m == n-1 and p == n-1) and !flag)
    {
        return;
    }
}

int main()
{
    // int n;
    cin >> n;
    
    vector<vector<int> >v(n, vector<int>(n));
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin >> v[i][j];
            M[{i,j}] = false;
        }
    }
    int i=0, j=0;
    path.push_back({0, 0});
    if(v[0][0]%2!=0 or v[n-1][n-1]%2!=0)
    ans = "NO";
    else
    findPath(v, i, j);
    cout << ans << endl;
    return 0;
}