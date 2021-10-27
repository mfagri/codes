#include<stdio.h>
int strcmp(char *str,char *b)
{
	int i;
	i = 0;
	while(str[i] != '\0'&& b[i] != '\0'&& str[i] == b[i])
	{
		i++;
	}
	return(str[i] - b[i]);
}
int main()
{
	char x[9];
	char a[]="marouane";
	char b[]="fagri";
	char c[6];
	printf("give your name\n");
	scanf("%s",&x);
	if(strcmp(a,x) == 0)
	{
		printf("hello %s\n",x);
		printf("your first name\n");
		scanf("%s",&c);
		if(strcmp(b,c) == 0)
		{
			printf("mfagri welcome\n");
		}
	}
	else
		printf("fuck u are not mfagri\n");
}
