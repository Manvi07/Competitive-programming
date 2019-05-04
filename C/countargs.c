#include <stdio.h>
#include <string.h>
int main()
{
  struct name
  {
    char*word;
    int count;
  }a[10];
int i=0;
for(i=0;i<10;i++){
a[i].count=0;a[i].word=NULL;}
char g[100];
scanf("%s",a[0].word);
a[0].count++;
while(scanf("%s",g) != EOF)
{
  scanf("%s",g);
  for(i=0;i<10;i++)
  if(strcmp(a[i].word,g)==0)
  a[i].count++;
  else {int k=0;while(a[k].count!=0){k++;}a[k].count++;a[k].word=g;}
}printf("bhjgh\n" );
for( i=0;i<5;i++)
printf("%s %d\n",a[i].word ,a[i].count);
return 0;
}
