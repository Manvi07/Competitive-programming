#include <bits/stdc++.h>
using namespace std;

void solve(vector<vector<int> > &A) {
    set<int> s;
   for(int i=0; i<A.size(); i++)
   {
       for(int j = 0; j<A[i].size(); j++)
       if(A[i][j] == 0)
       {
           s.insert(i);
           s.insert(j);
       }
   }
   for(auto it = s.begin(); it!= s.end(); it++)
   {
       for(int i=0; i<A[0].size(); i++)
       A[*it][i] =0;
       for(int i=0; i<A.size(); i++)
       {
           A[i][*it] = 0;
       }
   }
}


int main()
{
    vector<vector <int> >A = {{1,0,1},{1,1,1},{1,1,1}};
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        cout << A[i][j] << " ";
        cout << endl;
    }
    solve(A);
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        cout << A[i][j] << " ";
        cout << endl;
    }
    return 0;
}