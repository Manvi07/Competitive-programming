#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &A) {
    sort(A.begin(), A.end());
    // cout << A.size() << endl;
    // A.erase( unique( A.begin(), A.end() ), A.end() );
    // cout << A.size() << endl;
    for(int i=0; i<A.size(); i++)
    {
        // cout << A[i] << " ";
        if(i<A.size() and A[i] == A[i+1])
        {
            int j = i;
            while(j<A.size() and A[j] == A[i])
            {
                j++;
            }
            if(A.size() - j - 1 == A[i])
            {
                cout << " #"  << A[i] << endl;
                return 1;
            }
        }
    }
    return -1;
}


int main()
{
    vector<int> v = {1, 2, 7, 0, 9, 3, 6, 0, 6 };
    cout << solve(v) << endl;
    return 0;
}