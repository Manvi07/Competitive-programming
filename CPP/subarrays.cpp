#include <bits/stdc++.h>
using namespace std;
int h;int sum;
void combinationUtil(int arr[], int n, int r, int index,
                     int data[], int i)
{
    if (index == r) {
        for (int j = 0; j < r; j++)
          {  h=h*data[j];sum+=data[j];
          }// cout<<data[j]<<" ";}
          //cout<<endl<<h<<" "<<sum<<endl;
if(h==sum)c++;
//{for (int j = 0; j < r; j++) cout<<data[j]<<" ";cout<<endl;}
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
    long long int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    long long int c=0;
    int sz = sizeof(arr) / sizeof(arr[0]);
    for(int i=1;i<=n;i++)
    {h=1;sum=0;printCombination(arr, n, i);
    //if(h==sum) c++;
    cout<<(c)<<endl;
  }
    return 0;
}
