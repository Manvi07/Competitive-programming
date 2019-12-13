#include<bits/stdc++.h>
using namespace std;

void leftassign(vector<int> &v)
{
    for(int i=0; i<10; i++)
    {
        if(v[i] == 0)
        {
            v[i] = 1;
            return;
        }
    }
}

void rightassign(vector<int> &v)
{
    for(int i=9; i>=0; i--)
    {
        if(v[i] == 0)
        {
            v[i] = 1;
            return;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    string s;
    cin >> s;
    vector<int>v(10);
    v.assign(10, 0);
    for(int i=0; i<t; i++)
    {
        if(s[i] == 'L')
        leftassign(v);
        else if(s[i] == 'R')
        rightassign(v);
        else
        {
            int temp = int(s[i] - '0');
            v[temp] = 0;
        }
    }
    for(auto i: v)
    cout << i;
    cout << endl;
    return 0;
}