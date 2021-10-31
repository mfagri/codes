#include<stdio.h>
#include<string.h>

char *ft_strcpy(char *dest, char *src)
{
	int i;
	i = 0;
	while(src[i] != '\0' )
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return dest;
}
int main()
{
	char dest[9];
	printf("%s",ft_strcpy(dest,"marwan"));
}	
