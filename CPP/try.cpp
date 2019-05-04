#include<bits/stdc++.h>
using namespace std;
int n = 7;
void bubble(int a[])
{
  for(int i=0;i<n;i++)
  {
      for(int j=i+1;j<n;j++)
    {
      if(a[i]>a[j])
      swap(a[i],a[j]);
    }
  }
}
void insertion(int a[])
{
  int key;
  for(int i=1;i<n;i++)
  {
    key = a[i];
    int j = i-1;
    while(j>=0 and key<a[j])
    {
      a[j+1] = a[j];
      j--;
    }
    a[j+1]=key;
    }
}
int findmin(int a[],int s)
{
  int min = 100;
  int index = s;
  for(int i=s;i<n;i++)
  {
    if(min>a[i])
    {
      min=a[i];
      index = i;
    }
  }
  return index;
}
void selection(int a[])
{
for(int i=0;i<n;i++)
{
  swap(a[i], a[findmin(a, i)]);
}
}
void merge(int a[], int start,int mid, int end)
{
  int s1 = mid - start + 1;
  int s2 = end -mid;
  int left[s1], right[s2];
  for(int i=0;i<s1;i++)
  left[i] = a[start+i];
  for(int i = 0;i<s2;i++)
  right[i] = a[mid+i+1];
  int i=0,k=start,j=0;
  while(i<s1 and j< s2)
  {
    if(left[i]<=right[j])
    {
      a[k] = left[i];
      k++;
      i++;
    }
    else
    {
      a[k] = right[j];
      j++;
      k++;
    }
  }
  while(i<s1)
  {
    a[k] = left[i];
    k++;
    i++;
  }
  while(j<s2)
  {
    a[k] = right[j];
    k++;
    j++;
  }
}
void mergesort(int a[], int start, int end)
{
  if(start<end)
  {
    int mid = (start+end)/2;
    mergesort(a, start, mid);
    mergesort(a, mid+1, end);
    merge(a, start, mid, end);
  }
}
void heapify(int arr[], int n, int i)
{
    int largest = i;  // Initialize largest as root
    int l = 2*i + 1;  // left = 2*i + 1
    int r = 2*i + 2;  // right = 2*i + 2

    // If left child is larger than root
    if (l < n && arr[l] > arr[largest])
        largest = l;

    // If right child is larger than largest so far
    if (r < n && arr[r] > arr[largest])
        largest = r;

    // If largest is not root
    if (largest != i)
    {
        swap(arr[i], arr[largest]);

        // Recursively heapify the affected sub-tree
        heapify(arr, n, largest);
    }
}

void heapSort(int arr[])
{
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);
    for (int i=n-1; i>=0; i--)
    {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}

void ranksort(int a[])
{
  int r[n]={1,1,1,1,1,1};
  for(int i=1;i<n;i++)
  for(int j=0;j<i;j++)
  if(a[i]<a[j])
  r[j]++;
  else
  r[i]++;
  int u[n];
  for(int i=0;i<n;i++)
  u[r[i]-1] = a[i];
  for(int i=0;i<n;i++)
  a[i] = u[i];
}

int partition(int a[], int start, int end)
{
  int pivot = a[end];
  int partitionIndex = start;
  for(int i=partitionIndex;i<end;i++)
  {
    if(a[i]<=pivot)
    {
      swap(a[i], a[partitionIndex]);
      partitionIndex++;
    }
  }
  swap(a[partitionIndex], a[end]);
  for(int i=0;i<n;i++)
  std::cout << a[i];
  cout << '\n';
return partitionIndex;
}

void quick(int a[], int start, int end)
{
  if(start<end)
  {
    int p = partition(a, start, end);
    quick(a, start, p-1);
    quick(a, p+1, end);
  }
}
int main()
{
  int a[]= {4, 1, 6, 8, 2 , 1, 1};
  heapSort(a);
  for(int i=0;i<n;i++)
  cout << a[i];
return 0;
}
