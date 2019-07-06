#include <bits/stdc++.h>

using namespace std;

int fun(const vector<int> &A) {
    unordered_map<int, int>m;
    for(int i=0; i<A.size(); i++)
    {
        m[A[i]]++;
        // cout << A[i] << " " << m[A[i]] << "\n";   
    }
    for(int i=0; i<A.size(); i++)
    {
        // cout << m.count(A[i]) << " ";
        if(m[A[i]]>1)
        return A[i];
    }
    return -1;
}


int main()
{
    vector<int> v = {1, 2 , 3 , 4 , 6};
    cout << fun(v);
    return 0;
}