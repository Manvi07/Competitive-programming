#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void swap(int *a,int *b)
{
  int *t=malloc(sizeof(int));
  *t=*a;
  *a=*b;
  *b=*t;
}
void print(int a[],int n)
{
  for(int i=0;i<n;i++)
  printf("%d ",a[i] );
  printf("\n" );
}
void selectionSort(int a[],int n)
{
  for(int i=0;i<n;i++)
  for(int j=i+1;j<n;j++)
  if(a[i]>a[j])
  {
    swap(&a[i],&a[j]);
  }
}
void bubble_Sort(int a[],int n)
{
    for(int i=0;i<n-1;i++)
  for(int j=0;j<n-1-i;j++)
  if(a[j]>a[j+1])
  {swap(&a[j+1],&a[j]);}
}
void insertionSort(int arr[], int n)
{
   int i, key, j;
   for (i = 1; i < n; i++)
   {
       key = arr[i];
       j = i-1;
       while (j >= 0 && arr[j] > key)
       {
           arr[j+1] = arr[j];
           j--;
       }
       arr[j+1] = key;
   }
}
void merge(int a[],int l,int m,int r)
{
  int n1=m+1-l;
  int n2=r-m;
  int L[n1],R[n1];
  for(int i=0;i<n1;i++)
  L[i]=a[l+i];
  for(int i=0;i<n2;i++)
  R[i]=a[m+i+1];
  int k=l;
  int i=0,j=0;
  while( i<n1 && j<n2)
  {
    if(L[i]<=R[j])
    {
      a[k]=L[i];
      i++;
    }
    else
    {
      a[k]=R[j];
      j++;
    }
    k++;
  }
  while(i<n1)
  {
    a[k]=L[i];
    i++;
    k++;
  }
  while(j<n2)
  {
    a[k]=R[j];
    j++;
    k++;
  }
}
void mergesort(int a[],int l,int r)
{
if(l<r)
{int mid  = l+(r-l)/2;
mergesort(a,l,mid);
mergesort(a,mid+1,r);
merge(a,l,mid,r);}
}
int main()
{
  int a[]={1,5,2,66,3,56,7,33};
  mergesort(a,0,7);
  print(a,8);
  return 0;
}
