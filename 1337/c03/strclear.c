#include<stdio.h>
char *strclear(char *str,char *to_find)
{
	int i;
	int j;
	i = 0;
	if(to_find[i] == '\0')
		return str;
	while(str[i] != '\0')
	{
		j = 0;
		while(str[i + j] != '\0' && str[i+j] == to_find[j])
		{
			if(to_find[j+1] == '\0')
				return(&str[i]);
			j++;
		}
		i++;
	}
}
int main()
{
	char a[100] = "abcd";
	char b[100] = "cd";
	printf("%s\n",strclear(a,b));
}
