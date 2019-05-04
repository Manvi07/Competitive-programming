#include <stdio.h>
void merge(int *a,int *b,int* d,int m,int n)
{
  for(int i=0;i<m;i++)
  d[i]=a[i];
  for(int i=m;i<n;i++)
  d[i]=b[i-m];
  printf("merge:\n" );
  for(int i=0;i<n;i++)
  printf("%d\t",a[i] );
  printf("\n" );
}
void mergesort(int* a,int n)
{
  printf("n=%d\n",n );
  if(n<2)return;
  int mid=n/2;int high=n;
  int right[mid];
  for(int i=0;i<mid;i++)
  {right[i]=a[i];printf("%d\t",right[i]);}printf("\n" );
  int left[n-mid];
  for(int i=mid;i<n;i++)
  {left[i-mid]=a[i];printf("%d\t",left[i-mid] );}printf("\n" );
  mergesort(right,mid);
  mergesort(left,n-mid);
  merge(left,right,a,mid,high);
}
int main()
{
  int a[]={1,5,56,2,6,8,9};
  int n=sizeof(a)/sizeof(a[0]);
  mergesort(a,n);
  for(int i=0;i<n;i++)
  printf("%d\t",a[i] );
  return 0;
}
