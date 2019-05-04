#include <bits/stdc++.h>
using namespace std;

// In the array A at every step we have two
// choices for each element either  we can
// ignore the element or we can include the
// element in our subset
void subsetsUtil(vector<int>& A, vector<vector<int> >& res,
                 vector<int>& subset, int index)
{
    for (int i = index; i < A.size(); i++) {

        // include the A[i] in subset.
        subset.push_back(A[i]);
        res.push_back(subset);

        // move onto the next element.
        subsetsUtil(A, res, subset, i + 1);

        // exclude the A[i] from subset and triggers
        // backtracking.
        subset.pop_back();
    }

    return;
}

// below function returns the subsets of vector A.
vector<vector<int> > subsets(vector<int>& A)
{
    vector<int> subset;
    vector<vector<int> > res;

    // include the null element in the set.
    res.push_back(subset);

    // keeps track of current element in vector A;
    int index = 0;
    subsetsUtil(A, res, subset, index);

    return res;
}

// Driver Code.
int main()
{
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
  std::vector<int> array(n);
  std::vector<int> b(n);
  std::vector<int> v2;
  for(int i=0;i<n;i++)
  cin>>array[i]>>b[i];

    vector<vector<int> > res = subsets(array);

    // Print result
    for (int i = 0; i < res.size(); i++) {
        for (int j = 0; j < res[i].size(); j++)
          {
            int q;
            for(int k=0;k<n;k++)
              if(array[k]==res[i][j])
                {
                  q=k;
                  break;
                }
                v2.push_back(q); int m=0;sum=0;c=0;          
                for(int k=1;k<v2.size();k++)
                {
                  m=min(array[k],array[k-1]);
                  sum+=b[k];
                }
                if(m>=sum/res[i].size())
                c++;
              }
        cout << endl;
    }
}
    return 0;
}
