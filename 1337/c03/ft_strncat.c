#include<stdio.h>
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int i;
	unsigned int j;
	i = 0;
	j = 0;
	while(dest[j] != '\0')
	{
		j++;
	}
	while(src[i] != '\0' && i < nb)
	{
		dest[j + i] = src[i];
		i++;
	}
	dest[j+i] = '\0';
	return dest;
}
int main()
{
	char c[100] = "marouane";
	char b[100] = "fagriii";
	printf("%s",ft_strncat(c,b,5));
}
