#include <bits/stdc++.h>
using namespace std;
void merge(int*a,int low,int high,int mid)
{
  int temp[high+1-low];
  int k=0,i=low,j=mid+1;
  while(i<=mid && j<=high)
  {
    if(a[i]<a[j])
    {
      temp[k]=a[i];
      k++;i++;
    }
    else
    {
      temp[k]=a[j];
      k++;j++;
    }
  }
  while(i<=mid)
  {
    temp[k]=a[i];k++;i++;
  }
  while (j<=high) {
    temp[k]=a[j];k++;j++;
  }
  for(int i=low;i<=high;i++)
  {a[i]=temp[i-low];}
}
void mergesort(int *a,int low,int high)
{
  int mid;
  if(low<high)
  {
    mid=(low+high)/2;
    mergesort(a,low,mid);
    mergesort(a,mid+1,high);
    merge(a,low,high,mid);
  }
}
int main()
{
  cout<<"Enter the no. data elements to be sorted:";
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  cin>>a[i];
  mergesort(a,0,n-1);
  cout<<"Sorted data:";
  for(int i=0;i<n;i++)
  cout<<a[i]<<" ";
  cout<<endl;
}
