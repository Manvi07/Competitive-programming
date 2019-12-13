#include <bits/stdc++.h>
using namespace std;

vector<vector<char> > swapcol(int n, int m, vector<vector<char> > matrix, map<int, int>M, vector<int>v)
{
    vector<vector<char> > arr(n, vector<char >(m));
    int k=0;
    // cout << n << m << endl;
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            arr[j][k] = matrix[j][M[v[i]]];
        }
        k++;
    }
    return arr;
}

int main()
{
    string s, code;
    cin >> s >> code;
    vector<vector<char> >matrix(s.size()/code.size(), vector<char >(code.size()));
    bool Switch = true;
    vector<int>v(code.size()), g(code.size());
    map<int, int>m;
    for(int i=0; i<code.size(); i++)
    {
        v[i] = int(code[i] - '0');
        g[i] = v[i];
        m[int(code[i] - '0')] = i;
    }
    sort(g.begin(), g.end());
    for(int i=0; i<code.size(); i++)
    {
        m[g[i]] = i;
    }
    int k=0;
    for(int i=0; i<code.size(); i++)
    {
        if(Switch)
        {
            for(int j=0; j<s.size()/code.size(); j++)
            {
                matrix[j][i] = s[k];
                k++;
            }
        }
        else
        {
            for(int j=(s.size()/code.size())-1; j>=0 ; j--)
            {
                matrix[j][i] = s[k];
                k++;
            }
        }
        Switch = !Switch ;       
    }    

    // for(int i=0; i<s.size()/code.size(); i++)
    // {
    //     for(int j=0; j<code.size(); j++)
    //     {
    //         cout << matrix[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    matrix = swapcol(s.size()/code.size(), code.size(), matrix, m, v);
    map<char, char>alpha;
    for(int i=0; i<26; i++)
    {
        alpha[char(i+'A')] = char('Z' - i);
    }
    for(int i=0; i<s.size()/code.size(); i++)
    {
        for(int j=0; j<code.size(); j++)
        {
            matrix[i][j] = alpha[matrix[i][j]];
            cout << matrix[i][j];
        }
    }
    cout << endl;
    return 0;
}