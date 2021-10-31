#include<stdio.h>
int ft_strlen(char *s)
{
	int i;
	i = 0;
	while(s[i] != '\0')
	{
		i++;
	}
	return i;
}
int main()
{
	int b;
	b = ft_strlen("one piece");
	printf("%d\n",b);
}
