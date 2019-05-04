#include<bits/stdc++.h>
using namespace std;
void partition(int left,int right,int pivot)
{
  int *leftp=left-1;
  int *rightp=right-1;
  while (1) {
    while(a[++leftp]<pivot)
  }
}
void quicksort(int *a,int left, int right)
{
  if(right<left)
  return;
  else
  {
    int pivot=a[right];
    int part=partition(left,right,pivot);
    quicksort(left,partition-1);
    quicksort(partition+1,right);
  }
}
int main()
{

}
