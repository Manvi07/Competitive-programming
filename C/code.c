#include <stdio.h>
#include <math.h>
// using namespace std;
int nim(int x,int n,int a[n],int r)
{   int i;
    int min=a[x];
    for(i=x+1;i<=r;i++)
    if(min>a[i])
    min=a[i];
    return min;
}
int xam(int x,int n,int a[n],int r)
{   int j;
    int min=a[r];
    for(j=r+1;j<=x;j++)
    if(min<a[j])
    min=a[j];
    return min;
}

int main()
{

        int n;
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
        int q;
        scanf("%d",&q);
        while(q--)
        {
            int r;
        scanf("%d",&r);
          int a=0,b=0;

            for(int i=1;i<=r;i++)
            {
                a+=nim(i,n,&a,r);
                b+=xam(i,n,&a,r);
            }

            printf("%f\n",fmod(a*b,(10e8)+9));
        }

    return 0;
}
