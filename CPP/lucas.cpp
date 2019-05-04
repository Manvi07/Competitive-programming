#include <bits/stdc++.h>
using namespace std;
long long int s=0;
void combinationUtil(int arr[], int n, int r, int index,
                     int data[], int i)
{
    if (index == r) {int h=1;
        for (int j = 0; j < r; j++)
            h=h*data[j];
            s+=h;

        return;
    }

    if (i >= n)
        return;

    data[index] = arr[i];
    combinationUtil(arr, n, r, index + 1, data, i + 1);

    combinationUtil(arr, n, r, index, data, i + 1);
}
void printCombination(int arr[], int n, int r)
{

    int data[r];
 combinationUtil(arr, n, r, 0, data, 0);
}
int main()
{
  int t;
  cin>>t;
  while (t--)
  {
    long long int n,p;
    cin>>n>>p;
    int arr[n];long long int m=1000000009;
    for(int i=0;i<n;i++)
    arr[i]=i+1;long long int c=0;//if(p!=1)c++;
    // int r = 3;
    int sz = sizeof(arr) / sizeof(arr[0]);
    for(int i=1;i<=n;i++)
    {s=0;printCombination(arr, sz, i);
    if(s%p!=0) c++;}
    cout<<(c+1)%m<<endl;
  }
    return 0;
}
