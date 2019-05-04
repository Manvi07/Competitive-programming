#include <stdio.h>
int main()
{
int t,i=0;int p;printf("jhgf\n");
scanf("%d\n",&t);
for(;i<t;i++)
{
  int n=0;
  scanf("%d",&p);
  n=p*p/16;
  if(n>0)
  {for(i=0;p>0;i++)
  {
    p=p-2*n;
    n=n+p*p/8;
  }
  }
printf("%d\n",n);

}
return 0;
}
