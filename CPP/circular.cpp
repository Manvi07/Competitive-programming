#include <bits/stdc++.h>
using namespace std;

bool isSubArray(vector<int>A, vector<int> B, int n, int m) 
{ 
    // Two pointers to traverse the arrays 
    int i = 0, j = 0; 
  
    // Traverse both arrays simultaneously 
    while (i < n && j < m) { 
  
        // If element matches 
        // increment both pointers 
        if (A[i] == B[j]) { 
  
            i++; 
            j++; 
  
            // If array B is completely 
            // traversed 
            if (j == m) 
                return true; 
        } 
        // If not, 
        // increment i and reset j 
        else { 
            i++; 
            j = 0; 
        } 
    } 
  
    return false; 
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> v(2*n);
        for(int i=0; i<n; i++)
        cin >> v[i];
        for(int i=n; i<2*n; i++)
        v[i] = v[i-n];
        string ans = "NO";

        vector<int> T1(n), T2(n);
        for(int i=0; i<n; i++)
        {
            T1[i] = i+1;
            T2[i] = n-i;
        }
        if(isSubArray(v, T1, 2*n, n) or isSubArray(v, T2, 2*n, n))
        ans = "YES";

        // int k = 0;

        // for(int i=0; i<2*n ;i++)
        // {
        //     if(v[i] == 1)
        //     {
        //         for(int j=i+1; j<n+i+1;j++)
        //         {
        //             if(v[j] != v[j-1]+1)
        //             break;
        //             k = j;
        //         }
        //         if(v[k] == n)
        //         {
        //             ans = "YES";
        //             break;
        //         }
        //     }
        //     if(v[i] == n)
        //     {
        //         for(int j=i+1; j<n+i+1;j++)
        //         {
        //             if(v[j] != v[j-1]-1)
        //             break;
        //             k = j;
        //         }
        //         if(v[k] == 1)
        //         {
        //             ans = "YES";
        //             break;
        //         }
        //     }
        // }
        cout << ans << endl;
    }
    return 0;
}