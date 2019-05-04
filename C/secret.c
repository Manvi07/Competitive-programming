#include <stdio.h>
#include <string.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{char s[100];
		fgets(s,100,stdin);
		char c='\0';
		if(strcmp(s,".\n")==0)
			{c='a';}
		else if(strcmp(s,"..\n")==0)
			c='b';
		else if(strcmp(s,"...\n")==0)
			c='c';
		else if(strstr(s,"... "))
		{
			int count=0;
			for(int i=0;i<strlen(s);i++)
				if(s[i]=='.')
					count++;
				c=(char)(count-1)+'a';
		}
		else if(strstr(s,".. "))
		{
	
			c=(char)(strlen(s)-2)+'a';
		}
		
		else if(strstr(s,". "))
		{
			int count=0;
			for(int i=0;i<strlen(s);i++)
				if(s[i]==' ')
					count++;
				c=(char)(count*3)+'a';
		}
		printf("%c\n",c );}
	return 0;
}