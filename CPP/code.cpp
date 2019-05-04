#include <bits/stdc++.h>
using namespace std;
int nim(int x,int *a,int r)
{   int i;
    int min=a[x];
    for(i=x+1;i<=r;i++)
    if(min>a[i])
    min=a[i];
    return min;
}
int xam(int x,int *a,int r)
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
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        int q;
        cin>>q;
        while(q--)
        {
            int r;int a=0,b=0;
            cin>>r;
            for(int i=1;i<=r;i++)
            {
                a+=nim(i,&a,r);
                b+=xam(i,&a,r);
            }
            // / g=a*b;
            cout<<a<<endl<<b<<endl<<fmod(a*b,1000000000+9)<<endl;
        }

    return 0;
}
