#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
int max(char s[],int n)
{
  clock_t start, end;
  double t;
  start = clock();
  FILE *f=fopen(s,"r");
  if(f==NULL)
  printf("Can't open\n" );
  else{
  int a[n];
  int i;
  for(i=0;i<n;i++)
  fscanf(f,"%d",&a[i]);
  int max=a[0];
  for(i=0;i<n;i++)
  if(max<a[i])
  max=a[i];
  FILE *p=fopen("time.txt","w");
  // printf("Max=%d\n",max);
  end=clock();
  t = ((double) (end - start)) / CLOCKS_PER_SEC;
  fprintf(p,"%d %lf\n",n,t);
  fclose(p);fclose(f);}
}
int main()
{
  char s[100];
  s[] ="data_100.txt";
  // int n=100;
  max(s,100);
  s[]="data_500.txt";
  max(s,500);
  return 0;
}
