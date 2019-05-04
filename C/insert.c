#include <stdio.h>
int * insert(int *a,int l,int new)
{
  int i=0;
  int k=-1;
  while(k!=i)
  {if(a[i]<new && i<l)
  {i++;}
  else k=i;}

  // printf("i=%d\n",i );
int j;
  for(j=l;j>k;j--)
  a[j]=a[j-1];
  a[k]=new;return a;
}
int main()
{
  FILE *f=fopen("input.txt","r");
  FILE *p=fopen("output.txt","w");int l,n;
  scanf("%d %d",&l,&n);int i,s[l+1];
  for(i=0;i<l;i++)
  fscanf (f, "%d", &s[i]);
  int *u=insert(s,l,n);printf("okay\n" );
  for(int i=0;i<l+1;i++)
  fprintf(p,"%d\n",u[i]);
  fclose(p);fclose(f);printf("Done\n");
  return 0;
}
