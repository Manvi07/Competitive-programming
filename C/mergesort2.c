#include <stdio.h>
void merge(int n,int a[n],int left[n/2],int right[n-n/2])
{
    int i=0,j=0,k=0;int temp[n];
    while(i<n/2 && j<n)
    {
        if(left[i]<right[j])
        {temp[k]=left[i];
        k++;i++;}
        else
        {
            temp[k]=right[j];k++;j++;
        }
    }
    while(i<n/2)
    {
        temp[k]=left[i];i++;k++;
    }
    while(j<n)
    {
        temp[k]=right[j];k++;j++;
    }
    for(int i=0;i<n;i++)
    a[i]=temp[i];
}
void mergesort(int n,int a[n])
{

    if(n<2) return;
    int i;int j;
    int left[n/2+1],right[n-n/2+1];
    for(i=0;i<n/2;i++)
    {left[i]=a[i];}//printf("%d ",left[i]);}printf("\n" );
    for(i=n/2,j=0;i<n;i++,j++)
    {right[j]=a[i];}//printf("%d ",right[j] );}printf("\n" );
    mergesort(n/2,left);
    mergesort(n-n/2,right);
    merge(n,a,left,right);

}
int main()
{
    printf("enter the no. of elements to be sorted:");
    int n;
    scanf("%d",&n);
    int a[n];
    int i;printf("Enter the elements:");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    mergesort(n,a);
    printf("Answer:\n");
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
    printf("\n");
    return 0;
}
