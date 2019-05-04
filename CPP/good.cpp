#include <bits/stdc++.h>
using namespace std;

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

/* Function to print permutations of string
   This function takes three parameters:
   1. String
   2. Starting index of the string
   3. Ending index of the string. */
void permute(int l, std::vector<int> v)
{
   int i;

       for (i = 0; i <l; i++)
       {
          swap((a+l), (a+i));
          permute(a, l+1, r);
          swap((a+l), (a+i)); //backtrack
       }

}


int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n,k;
    cin>>n>>k;
    int a[n];
    std::vector<int>v;
    bool c[n+1]={false};
    for(int i=0;i<n;i++)
    cin>>a[i];
    int count=0;
    for(int i=1;i<=n;i++)
      for(int j=0;j<n;j++)
      if(a[j]==i)
      {
        c[i]=true;
      }
      else {v.push_back(i);count++;}
      permute(count,v);
  }
  return 0;
}
