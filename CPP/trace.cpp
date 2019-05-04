#include <bits/stdc++.h>
using namespace std;
int **a;

 int trace(int I,int J,int n)
 {
   int t=0, j=0;
   for(int i=I,j=J;i<n && j<n;j++,i++)
   t+=a[i][j];
   return t;
 }
int main()
{
  int t;
   cin>>t;
   while(t--)
   {
     int n;
     cin>>n;
     a=(int**)malloc(n*sizeof(int*));
     for(int i=0;i<n;i++)
     a[i]=(int*)malloc(n*sizeof(int));
     for(int i=0;i<n;i++)
     for(int j=0;j<n;j++)
     cin>>a[i][j];
     int s=0,j=0;
     for(int i=0;i<n;i++)
     {
       int t=trace(i,0,n);
       if(t>=s)
       s=t;
     }
     for(int j=1;j<n;j++)
     {
       int t=trace(0,j,n);
       if(t>=s)
       s=t;
     }
     cout<<s<<endl;
   }
}
