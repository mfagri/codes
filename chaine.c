#include<stdio.h>
#include<stdlib.h>
char *chan(char *s)
{
	int i;
	char *dest;
	i = 0;
	while(s[i] != '\0')
	{
		i++;
	}
	int len = i;
	i = 0;
	dest = malloc(len * sizeof(char));
	while(i != len)
	{
	       dest[i] = s[i];
	       i++;
	}	       
	dest[i + 1] = '\0';
	return dest;
}
int main()
{
	char *b = chan("marwan");
	printf("%s\n",b);
}
