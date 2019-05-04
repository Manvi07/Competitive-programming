#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  clock_t start, end;
  double cpu_time_used;
  start = clock();
  int n;
  scanf("%d",&n );
  float x[n],y[n];
  int i;
  for(i=0;i<n;i++)
  scanf("%f%f",&x[i],&y[i]);
  float d=(x[0]-x[1])*(x[0]-x[1])+(y[0]-y[1])*(y[0]-y[1]);
  int j;
  for(i=0;i<n;i++)
  for(j=0;j<n;j++)
  if(d<(x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]))
  d=(x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]);
  // printf("%f\n",d);
  // return 0;
  end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    FILE *p=fopen("new2.txt","a");
    fprintf(p,"%d %lf\n",n,cpu_time_used);
    fclose(p);
return 0;
}
