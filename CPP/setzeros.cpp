#include <bits/stdc++.h>
using namespace std;

void setZeroes(vector<vector<int> > &A) {
   vector<bool>rows;
   vector<bool>cols;
   
  for(int i=0; i<A.size(); i++)
  {
      for(int j=0; j<A[0].size(); j++)
      {
          if(A[i][j] == 0)
          {
              rows.push_back(i);
              cout << j;
              cols.push_back(j);
              cout << j;
          }
      }
  }
  cout << "----\n";
  for(auto i=0; i<cols.size(); i++)
  cout << cols[i] << " ";
  cout << endl;

//   for(auto it = rows.begin(); it!=rows.end(); it++)
//   {
//     //   cout << *it;
//       for(int j=0; j<A[0].size(); j++)
//       {
//           A[*it][j] = 0;
//       }
//   }
//   cout << endl;
//   for(auto it = cols.begin(); it!=cols.end(); it++)
//   {
//       cout << *it;
//       for(int i = 0; i<A.size(); i++)
//       {
//           A[i][*it] = 0;
//       }
//   }
}


int main()
{
    vector<vector<int> >A = {{1,1,0}, {0, 1 ,1 }, {1, 1, 1}};
    setZeroes(A);
    return 0;
}